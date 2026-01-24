#include "touch_sensor.h"
#include "hardware/gpio.h"
#include "pico/stdlib.h"
#include "FreeRTOS.h"
#include "queue.h"


// Touch sensor pin mapping
static const uint8_t touch_pins[TOUCH_SENSOR_COUNT] = {
    TOUCH_PIN_1,
    TOUCH_PIN_2,
    TOUCH_PIN_3
};

static QueueHandle_t touch_beep_queue = NULL;

void touch_sensor_set_beep_queue(QueueHandle_t queue)
{
    touch_beep_queue = queue;
}

void touch_sensor_init(TouchSensorManager *manager)
{
    for (int i = 0; i < TOUCH_SENSOR_COUNT; i++)
    {
        manager->sensors[i].pin = touch_pins[i];
        manager->sensors[i].currentState = false;
        manager->sensors[i].lastState = false;
        manager->sensors[i].startTime = 0;
        manager->sensors[i].duration = 0;
        manager->sensors[i].beepCount = 0;
        manager->sensors[i].lastBeepCount = 0;

        // Initialize GPIO pin as input
        gpio_init(touch_pins[i]);
        gpio_set_dir(touch_pins[i], GPIO_IN);
        gpio_pull_down(touch_pins[i]); // Pull-down for touch sensors
    }
}

void touch_sensor_update(TouchSensorManager *manager, uint64_t currentMillis)
{
    for (int i = 0; i < TOUCH_SENSOR_COUNT; i++)
    {
        TouchSensor *sensor = &manager->sensors[i];

        sensor->lastState = sensor->currentState;
        sensor->currentState = gpio_get(sensor->pin);

        if (sensor->currentState)
        {
            // Button is pressed
            if (!sensor->lastState)
            {
                // Rising edge - just pressed
                sensor->startTime = currentMillis;
                sensor->beepCount = 0;
                sensor->lastBeepCount = 0;
            }
            sensor->duration = currentMillis - sensor->startTime;
            if (TOUCH_BEEP_INTERVAL_MS > 0) {
                uint64_t expected_beeps = sensor->duration / TOUCH_BEEP_INTERVAL_MS;
                if (expected_beeps > sensor->beepCount) {
                    sensor->beepCount = (uint8_t)expected_beeps;
                    if (touch_beep_queue) {
                        TouchBeepEvent evt = {
                            .index = (uint8_t)i,
                            .count = sensor->beepCount
                        };
                        xQueueSend(touch_beep_queue, &evt, 0);
                    }
                }
            }
        }
        else
        {
            // Button is released
            if (sensor->lastState)
            {
                sensor->lastBeepCount = 0;
            }
            sensor->beepCount = 0;
            sensor->duration = 0;
            sensor->startTime = 0;
        }
    }
}

bool touch_sensor_is_pressed(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return false;

    TouchSensor *sensor = &manager->sensors[index];
    return sensor->currentState && !sensor->lastState;
}

bool touch_sensor_is_released(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return false;

    TouchSensor *sensor = &manager->sensors[index];
    return !sensor->currentState && sensor->lastState;
}

bool touch_sensor_is_held(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return false;

    return manager->sensors[index].currentState;
}

uint64_t touch_sensor_get_duration(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return 0;

    return manager->sensors[index].duration;
}

uint8_t touch_sensor_get_beep_count(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return 0;

    if (manager->sensors[index].currentState) {
        return manager->sensors[index].beepCount;
    }
    return manager->sensors[index].lastBeepCount;
}

bool touch_sensor_poll_beep(TouchSensorManager *manager, uint8_t index, uint64_t interval_ms, uint8_t *beep_index)
{
    if (index >= TOUCH_SENSOR_COUNT || interval_ms == 0) {
        return false;
    }

    TouchSensor *sensor = &manager->sensors[index];
    if (!sensor->currentState) {
        return false;
    }

    uint64_t expected_beeps = sensor->duration / interval_ms;
    if (expected_beeps > sensor->beepCount) {
        sensor->beepCount = (uint8_t)expected_beeps;
    }

    if (sensor->beepCount > sensor->lastBeepCount) {
        sensor->lastBeepCount++;
        if (beep_index) {
            *beep_index = sensor->lastBeepCount;
        }
        return true;
    }

    return false;
}
