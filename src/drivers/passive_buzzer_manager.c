#include "passive_buzzer_manager.h"
#include "hardware/gpio.h"
#include "hardware/pwm.h"
#include "pico/stdlib.h"
#include "project_config.h"
#include <stdlib.h>
#include <time.h>

// PWM 관련 변수
static uint slice_num;
static bool pwm_enabled = false;

// tone 함수 (PWM 기반)
static void tone(uint gpio, uint frequency)
{
    if (frequency == 0)
    {
        pwm_set_enabled(slice_num, false);
        pwm_enabled = false;
        return;
    }

    // PWM 주파수 설정
    uint32_t clock = 125000000; // 125MHz system clock
    uint32_t divider = clock / (frequency * 4096); // 4096 = wrap value
    if (divider < 1)
        divider = 1;

    pwm_set_clkdiv(slice_num, (float)divider);
    pwm_set_wrap(slice_num, 4095);
    pwm_set_chan_level(slice_num, PWM_CHAN_A, 2048); // 50% duty cycle

    if (!pwm_enabled)
    {
        pwm_set_enabled(slice_num, true);
        pwm_enabled = true;
    }
}

// noTone 함수
static void noTone(uint gpio)
{
    pwm_set_enabled(slice_num, false);
    pwm_enabled = false;
    gpio_put(gpio, 0);
}

void buzzer_init(PassiveBuzzerManager *manager)
{
    manager->buzzerPin = BUZZER_PIN;
    manager->isPlaying = false;
    manager->playStartTime = 0;
    manager->currentNoteStartTime = 0;
    manager->currentNoteIndex = 0;
    manager->queueStart = 0;
    manager->queueEnd = 0;
    manager->queueSize = 0;
    manager->noteActive = false;

    // PWM slice는 핀 설정 이후 계산
    slice_num = pwm_gpio_to_slice_num(manager->buzzerPin);

    noTone(manager->buzzerPin);

    // 난수 생성기 초기화
    srand(time_us_32());

    // 시작 멜로디 재생
    buzzer_play_startup(manager);
}

void buzzer_update(PassiveBuzzerManager *manager, uint64_t currentMillis)
{
    if (!manager->isPlaying || manager->queueSize == 0)
        return;

    // 첫 번째 노트 시작
    if (manager->currentNoteIndex == 0 && !manager->noteActive)
    {
        manager->playStartTime = currentMillis;
        manager->currentNoteStartTime = currentMillis;
        manager->noteActive = true;

        MelodyNote *note = &manager->melodyQueue[manager->queueStart];
        if (note->frequency > 0)
        {
            tone(manager->buzzerPin, note->frequency);
        }
        else
        {
            noTone(manager->buzzerPin); // 휴지표
        }
        // 버퍼 확인
        for (int i = 0; i < manager->queueSize; i++)
        {
            MelodyNote *n = &manager->melodyQueue[(manager->queueStart + i) % MAX_NOTES];
        }
    }

    // 현재 노트 재생 시간 체크
    if (manager->noteActive)
    {
        MelodyNote *currentNote = &manager->melodyQueue[(manager->queueStart + manager->currentNoteIndex) % MAX_NOTES];

        if (currentMillis - manager->currentNoteStartTime >= (uint64_t)currentNote->duration)
        {
            // 현재 노트 종료
            noTone(manager->buzzerPin);
            manager->noteActive = false;
            manager->currentNoteIndex++;

            // 다음 노트로 진행
            if (manager->currentNoteIndex >= manager->queueSize)
            {
                // 모든 노트 재생 완료
                buzzer_stop(manager);
            }
            else
            {
                // 다음 노트 시작 준비
                manager->currentNoteStartTime = currentMillis;
                manager->noteActive = true;

                MelodyNote *nextNote = &manager->melodyQueue[(manager->queueStart + manager->currentNoteIndex) % MAX_NOTES];
                if (nextNote->frequency > 0)
                {
                    tone(manager->buzzerPin, nextNote->frequency);
                }
                else
                {
                    noTone(manager->buzzerPin); // 휴지표
                }
            }
        }
    }
}

void buzzer_add_note(PassiveBuzzerManager *manager, int frequency, int duration)
{
    if (buzzer_is_queue_full(manager))
        return; // 큐가 가득 찬

    manager->melodyQueue[manager->queueEnd].frequency = frequency;
    manager->melodyQueue[manager->queueEnd].duration = duration;

    manager->queueEnd = (manager->queueEnd + 1) % MAX_NOTES;
    manager->queueSize++;

    // 재생 중이 아니면 자동으로 재생 시작
    if (!manager->isPlaying)
    {
        buzzer_play(manager);
    }
}

void buzzer_add_melody(PassiveBuzzerManager *manager, MelodyNote *melody, int noteCount)
{
    buzzer_stop(manager); // 현재 재생 중지
    for (int i = 0; i < noteCount && !buzzer_is_queue_full(manager); i++)
    {
        manager->melodyQueue[manager->queueEnd].frequency = melody[i].frequency;
        manager->melodyQueue[manager->queueEnd].duration = melody[i].duration;

        manager->queueEnd = (manager->queueEnd + 1) % MAX_NOTES;
        manager->queueSize++;
    }

    // 재생 중이 아니면 자동으로 재생 시작
    if (!manager->isPlaying)
    {
        buzzer_play(manager);
    }
}

void buzzer_play(PassiveBuzzerManager *manager)
{
    if (manager->queueSize > 0 && !manager->isPlaying)
    {
        manager->isPlaying = true;
        manager->currentNoteIndex = 0;
        manager->noteActive = false;
    }
}

void buzzer_stop(PassiveBuzzerManager *manager)
{
    manager->isPlaying = false;
    manager->noteActive = false;
    manager->currentNoteIndex = 0;
    noTone(manager->buzzerPin);

    // 큐 초기화
    buzzer_clear(manager);
}

void buzzer_clear(PassiveBuzzerManager *manager)
{
    manager->queueStart = 0;
    manager->queueEnd = 0;
    manager->queueSize = 0;
}

bool buzzer_is_playing(PassiveBuzzerManager *manager)
{
    return manager->isPlaying;
}

int buzzer_get_queue_size(PassiveBuzzerManager *manager)
{
    return manager->queueSize;
}

bool buzzer_is_queue_full(PassiveBuzzerManager *manager)
{
    return manager->queueSize >= MAX_NOTES;
}

void buzzer_play_beep(PassiveBuzzerManager *manager, int frequency, int duration)
{
    buzzer_stop(manager);
    buzzer_add_note(manager, frequency, duration);
}

void buzzer_play_success(PassiveBuzzerManager *manager)
{
    // 성공 멜로디: C-E-G
    MelodyNote successMelody[] = {
        {523, 200}, {0, 50}, // C5 + 휴지표
        {659, 200}, {0, 50}, // E5 + 휴지표
        {784, 300}           // G5
    };
    buzzer_add_melody(manager, successMelody, sizeof(successMelody) / sizeof(MelodyNote));
}

void buzzer_play_error(PassiveBuzzerManager *manager)
{
    // 에러 멜로디: 낮은 음 2회
    MelodyNote errorMelody[] = {
        {200, 300}, {0, 100}, // 낮은 음 + 휴지표
        {200, 300}            // 낮은 음
    };
    buzzer_add_melody(manager, errorMelody, sizeof(errorMelody) / sizeof(MelodyNote));
}

void buzzer_play_startup(PassiveBuzzerManager *manager)
{
    // 시작 멜로디: C-D-E-F-G
    MelodyNote startupMelody[] = {
        {523, 150}, {0, 30}, // C5 + 휴지표
        {587, 150}, {0, 30}, // D5 + 휴지표
        {659, 150}, {0, 30}, // E5 + 휴지표
        {698, 150}, {0, 30}, // F5 + 휴지표
        {784, 300}           // G5
    };
    buzzer_add_melody(manager, startupMelody, sizeof(startupMelody) / sizeof(MelodyNote));
}

void buzzer_play_happy_birthday(PassiveBuzzerManager *manager)
{
    // Happy Birthday (전통 민요)
    MelodyNote happyBirthdayMelody[] = {
        {523, 250}, {0, 50},   // C + 휴지표
        {523, 250}, {0, 50},   // C + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {698, 500}, {0, 100},  // F + 휴지표
        {659, 1000}, {0, 200}, // E + 휴지표
        {523, 250}, {0, 50},   // C + 휴지표
        {523, 250}, {0, 50},   // C + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {784, 500}, {0, 100},  // G + 휴지표
        {698, 1000}            // F
    };
    buzzer_add_melody(manager, happyBirthdayMelody, sizeof(happyBirthdayMelody) / sizeof(MelodyNote));
}

void buzzer_play_twinkle_twinkle(PassiveBuzzerManager *manager)
{
    // Twinkle Twinkle Little Star (전통 민요)
    MelodyNote twinkleMelody[] = {
        {523, 500}, {0, 100},  // C + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {784, 500}, {0, 100},  // G + 휴지표
        {784, 500}, {0, 100},  // G + 휴지표
        {880, 500}, {0, 100},  // A + 휴지표
        {880, 500}, {0, 100},  // A + 휴지표
        {784, 1000}, {0, 200}, // G + 휴지표
        {698, 500}, {0, 100},  // F + 휴지표
        {698, 500}, {0, 100},  // F + 휴지표
        {659, 500}, {0, 100},  // E + 휴지표
        {659, 500}, {0, 100},  // E + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {523, 1000}            // C
    };
    buzzer_add_melody(manager, twinkleMelody, sizeof(twinkleMelody) / sizeof(MelodyNote));
}

void buzzer_play_mary_had_a_little_lamb(PassiveBuzzerManager *manager)
{
    // Mary Had a Little Lamb (전통 민요)
    MelodyNote maryMelody[] = {
        {659, 500}, {0, 100},  // E + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {659, 500}, {0, 100},  // E + 휴지표
        {659, 500}, {0, 100},  // E + 휴지표
        {659, 1000}, {0, 200}, // E + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {587, 1000}, {0, 200}, // D + 휴지표
        {659, 500}, {0, 100},  // E + 휴지표
        {784, 500}, {0, 100},  // G + 휴지표
        {784, 1000}            // G
    };
    buzzer_add_melody(manager, maryMelody, sizeof(maryMelody) / sizeof(MelodyNote));
}

void buzzer_play_fur_elise(PassiveBuzzerManager *manager)
{
    // Für Elise - Beethoven (첫 부분, 퍼블릭 도메인)
    MelodyNote furEliseMelody[] = {
        {659, 300}, {0, 50},  // E + 휴지표
        {622, 300}, {0, 50},  // D# + 휴지표
        {659, 300}, {0, 50},  // E + 휴지표
        {622, 300}, {0, 50},  // D# + 휴지표
        {659, 300}, {0, 50},  // E + 휴지표
        {494, 300}, {0, 50},  // B + 휴지표
        {587, 300}, {0, 50},  // D + 휴지표
        {523, 300}, {0, 50},  // C + 휴지표
        {440, 600}, {0, 200}, // A + 휴지표
        {262, 300}, {0, 50},  // C4 + 휴지표
        {330, 300}, {0, 50},  // E4 + 휴지표
        {440, 300}, {0, 50},  // A4 + 휴지표
        {494, 600}            // B4
    };
    buzzer_add_melody(manager, furEliseMelody, sizeof(furEliseMelody) / sizeof(MelodyNote));
}

void buzzer_play_ode_to_joy(PassiveBuzzerManager *manager)
{
    // Ode to Joy - Beethoven (퍼블릭 도메인)
    MelodyNote odeToJoyMelody[] = {
        {659, 500}, {0, 100}, // E + 휴지표
        {659, 500}, {0, 100}, // E + 휴지표
        {698, 500}, {0, 100}, // F + 휴지표
        {784, 500}, {0, 100}, // G + 휴지표
        {784, 500}, {0, 100}, // G + 휴지표
        {698, 500}, {0, 100}, // F + 휴지표
        {659, 500}, {0, 100}, // E + 휴지표
        {587, 500}, {0, 100}, // D + 휴지표
        {523, 500}, {0, 100}, // C + 휴지표
        {523, 500}, {0, 100}, // C + 휴지표
        {587, 500}, {0, 100}, // D + 휴지표
        {659, 500}, {0, 100}, // E + 휴지표
        {659, 750}, {0, 150}, // E + 휴지표
        {587, 250}, {0, 50},  // D + 휴지표
        {587, 1000}           // D
    };
    buzzer_add_melody(manager, odeToJoyMelody, sizeof(odeToJoyMelody) / sizeof(MelodyNote));
}

void buzzer_play_cannon_in_d(PassiveBuzzerManager *manager)
{
    // Canon in D - Pachelbel (첫 부분, 퍼블릭 도메인)
    MelodyNote cannonMelody[] = {
        {587, 1000}, {0, 200}, // D + 휴지표
        {440, 500}, {0, 100},  // A + 휴지표
        {494, 500}, {0, 100},  // B + 휴지표
        {622, 500}, {0, 100},  // F# + 휴지표
        {784, 500}, {0, 100},  // G + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {784, 500}, {0, 100},  // G + 휴지표
        {440, 1000}, {0, 200}, // A + 휴지표
        {587, 1000}, {0, 200}, // D + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {440, 500}, {0, 100},  // A + 휴지표
        {494, 500}, {0, 100},  // B + 휴지표
        {622, 1000}            // F#
    };
    buzzer_add_melody(manager, cannonMelody, sizeof(cannonMelody) / sizeof(MelodyNote));
}

void buzzer_play_amazing_grace(PassiveBuzzerManager *manager)
{
    // Amazing Grace (전통 찬송가, 퍼블릭 도메인)
    MelodyNote amazingGraceMelody[] = {
        {392, 750}, {0, 150}, // G + 휴지표
        {523, 500}, {0, 100}, // C + 휴지표
        {523, 250}, {0, 50},  // C + 휴지표
        {440, 500}, {0, 100}, // A + 휴지표
        {523, 500}, {0, 100}, // C + 휴지표
        {440, 750}, {0, 150}, // A + 휴지표
        {349, 250}, {0, 50},  // F + 휴지표
        {392, 1000}, {0, 500},// G + 휴지표
        {392, 750}, {0, 150}, // G + 휴지표
        {523, 500}, {0, 100}, // C + 휴지표
        {523, 250}, {0, 50},  // C + 휴지표
        {587, 500}, {0, 100}, // D + 휴지표
        {523, 1500}           // C
    };
    buzzer_add_melody(manager, amazingGraceMelody, sizeof(amazingGraceMelody) / sizeof(MelodyNote));
}

void buzzer_play_greensleeves(PassiveBuzzerManager *manager)
{
    // Greensleeves (전통 영국 민요, 퍼블릭 도메인)
    MelodyNote greensleavesMelody[] = {
        {440, 500}, {0, 100}, // A + 휴지표
        {523, 750}, {0, 150}, // C + 휴지표
        {587, 250}, {0, 50},  // D + 휴지표
        {622, 500}, {0, 100}, // E♭ + 휴지표
        {698, 250}, {0, 50},  // F + 휴지표
        {622, 250}, {0, 50},  // E♭ + 휴지표
        {587, 500}, {0, 100}, // D + 휴지표
        {494, 750}, {0, 150}, // B♭ + 휴지표
        {392, 250}, {0, 50},  // G + 휴지표
        {440, 500}, {0, 100}, // A + 휴지표
        {466, 250}, {0, 50},  // B♭ + 휴지표
        {440, 250}, {0, 50},  // A + 휴지표
        {392, 500}, {0, 100}, // G + 휴지표
        {349, 1000}           // F
    };
    buzzer_add_melody(manager, greensleavesMelody, sizeof(greensleavesMelody) / sizeof(MelodyNote));
}

void buzzer_play_au_clair_de_la_lune(PassiveBuzzerManager *manager)
{
    // Au Clair de la Lune (프랑스 전통 민요, 퍼블릭 도메인)
    MelodyNote auLaitClairMelody[] = {
        {523, 500}, {0, 100},  // C + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {659, 1000}, {0, 200}, // E + 휴지표
        {587, 1000}, {0, 200}, // D + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {523, 500}, {0, 100},  // C + 휴지표
        {587, 500}, {0, 100},  // D + 휴지표
        {523, 2000}            // C
    };
    buzzer_add_melody(manager, auLaitClairMelody, sizeof(auLaitClairMelody) / sizeof(MelodyNote));
}

void buzzer_play_brahms_lullaby(PassiveBuzzerManager *manager)
{
    // Brahms Lullaby (퍼블릭 도메인)
    MelodyNote brahmsLullabyMelody[] = {
        {392, 750}, {0, 150}, // G + 휴지표
        {392, 250}, {0, 50},  // G + 휴지표
        {440, 500}, {0, 100}, // A + 휴지표
        {392, 750}, {0, 150}, // G + 휴지표
        {440, 250}, {0, 50},  // A + 휴지표
        {392, 500}, {0, 100}, // G + 휴지표
        {349, 500}, {0, 100}, // F + 휴지표
        {349, 500}, {0, 100}, // F + 휴지표
        {329, 1000}, {0, 200},// E + 휴지표
        {392, 750}, {0, 150}, // G + 휴지표
        {392, 250}, {0, 50},  // G + 휴지표
        {440, 500}, {0, 100}, // A + 휴지표
        {392, 750}, {0, 150}, // G + 휴지표
        {349, 250}, {0, 50},  // F + 휴지표
        {294, 1500}           // D
    };
    buzzer_add_melody(manager, brahmsLullabyMelody, sizeof(brahmsLullabyMelody) / sizeof(MelodyNote));
}

void buzzer_play_random(PassiveBuzzerManager *manager)
{
    // 랜덤 멜로디 재생 (0~11 사이의 랜덤 숫자)
    int randomMelody = rand() % 12;

    switch (randomMelody)
    {
    case 0:
        buzzer_play_success(manager);
        break;
    case 1:
        buzzer_play_happy_birthday(manager);
        break;
    case 2:
        buzzer_play_twinkle_twinkle(manager);
        break;
    case 3:
        buzzer_play_mary_had_a_little_lamb(manager);
        break;
    case 4:
        buzzer_play_fur_elise(manager);
        break;
    case 5:
        buzzer_play_ode_to_joy(manager);
        break;
    case 6:
        buzzer_play_cannon_in_d(manager);
        break;
    case 7:
        buzzer_play_amazing_grace(manager);
        break;
    case 8:
        buzzer_play_greensleeves(manager);
        break;
    case 9:
        buzzer_play_au_clair_de_la_lune(manager);
        break;
    case 10:
        buzzer_play_brahms_lullaby(manager);
        break;
    case 11:
        buzzer_play_beep(manager, 1000, 200);
        break;
    default:
        buzzer_play_beep(manager, 1000, 200); // 기본 비프음
        break;
    }
}
