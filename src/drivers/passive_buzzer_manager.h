#ifndef PASSIVE_BUZZER_MANAGER_H
#define PASSIVE_BUZZER_MANAGER_H

#include <stdint.h>
#include <stdbool.h>

#define BUZZER_PIN 16
#define BUTTON_PIN 24
#define MAX_NOTES 100

typedef struct
{
    int frequency;
    int duration;
} MelodyNote;

typedef struct
{
    int buzzerPin;
    int buttonPin;
    bool isPlaying;
    uint64_t playStartTime;
    uint64_t currentNoteStartTime;
    int currentNoteIndex;
    int queueStart;
    int queueEnd;
    int queueSize;
    bool noteActive;
    MelodyNote melodyQueue[MAX_NOTES];
    bool lastButtonState;
} PassiveBuzzerManager;

/**
 * @brief Initialize passive buzzer manager
 * @param manager Pointer to PassiveBuzzerManager instance
 */
void buzzer_init(PassiveBuzzerManager *manager);

/**
 * @brief Update buzzer state (called by timer)
 * @param manager Pointer to PassiveBuzzerManager instance
 * @param currentMillis Current time in milliseconds
 */
void buzzer_update(PassiveBuzzerManager *manager, uint64_t currentMillis);

/**
 * @brief Add a single note to the queue
 * @param manager Pointer to PassiveBuzzerManager instance
 * @param frequency Frequency in Hz (0 for rest)
 * @param duration Duration in milliseconds
 */
void buzzer_add_note(PassiveBuzzerManager *manager, int frequency, int duration);

/**
 * @brief Add a melody to the queue
 * @param manager Pointer to PassiveBuzzerManager instance
 * @param melody Array of MelodyNote
 * @param noteCount Number of notes in the melody
 */
void buzzer_add_melody(PassiveBuzzerManager *manager, MelodyNote *melody, int noteCount);

/**
 * @brief Start playing the queued notes
 * @param manager Pointer to PassiveBuzzerManager instance
 */
void buzzer_play(PassiveBuzzerManager *manager);

/**
 * @brief Stop playing and clear the queue
 * @param manager Pointer to PassiveBuzzerManager instance
 */
void buzzer_stop(PassiveBuzzerManager *manager);

/**
 * @brief Clear the note queue
 * @param manager Pointer to PassiveBuzzerManager instance
 */
void buzzer_clear(PassiveBuzzerManager *manager);

/**
 * @brief Check if buzzer is currently playing
 * @param manager Pointer to PassiveBuzzerManager instance
 * @return true if playing, false otherwise
 */
bool buzzer_is_playing(PassiveBuzzerManager *manager);

/**
 * @brief Get current queue size
 * @param manager Pointer to PassiveBuzzerManager instance
 * @return Number of notes in queue
 */
int buzzer_get_queue_size(PassiveBuzzerManager *manager);

/**
 * @brief Check if queue is full
 * @param manager Pointer to PassiveBuzzerManager instance
 * @return true if queue is full, false otherwise
 */
bool buzzer_is_queue_full(PassiveBuzzerManager *manager);

/**
 * @brief Check button state and play random melody if pressed
 * @param manager Pointer to PassiveBuzzerManager instance
 */
void buzzer_check_button(PassiveBuzzerManager *manager);

// Predefined melodies
void buzzer_play_beep(PassiveBuzzerManager *manager, int frequency, int duration);
void buzzer_play_success(PassiveBuzzerManager *manager);
void buzzer_play_error(PassiveBuzzerManager *manager);
void buzzer_play_startup(PassiveBuzzerManager *manager);
void buzzer_play_happy_birthday(PassiveBuzzerManager *manager);
void buzzer_play_twinkle_twinkle(PassiveBuzzerManager *manager);
void buzzer_play_mary_had_a_little_lamb(PassiveBuzzerManager *manager);
void buzzer_play_fur_elise(PassiveBuzzerManager *manager);
void buzzer_play_ode_to_joy(PassiveBuzzerManager *manager);
void buzzer_play_cannon_in_d(PassiveBuzzerManager *manager);
void buzzer_play_amazing_grace(PassiveBuzzerManager *manager);
void buzzer_play_greensleeves(PassiveBuzzerManager *manager);
void buzzer_play_au_clair_de_la_lune(PassiveBuzzerManager *manager);
void buzzer_play_brahms_lullaby(PassiveBuzzerManager *manager);
void buzzer_play_random(PassiveBuzzerManager *manager);

#endif // PASSIVE_BUZZER_MANAGER_H
