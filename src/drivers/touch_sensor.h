#ifndef TOUCH_SENSOR_H
#define TOUCH_SENSOR_H

#include <stdint.h>
#include <stdbool.h>
#include "pico/stdlib.h"
#include "config/project_config.h"

typedef struct
{
    uint8_t pin;
    bool currentState;
    bool lastState;
    uint64_t startTime;
    uint64_t duration;
    uint8_t beepCount;
    uint8_t lastBeepCount;
} TouchSensor;

typedef struct
{
    TouchSensor sensors[TOUCH_SENSOR_COUNT];
} TouchSensorManager;

/**
 * @brief Initialize touch sensor manager
 * @param manager Pointer to TouchSensorManager instance
 */
void touch_sensor_init(TouchSensorManager *manager);

/**
 * @brief Update all touch sensors state
 * @param manager Pointer to TouchSensorManager instance
 * @param currentMillis Current time in milliseconds
 */
void touch_sensor_update(TouchSensorManager *manager, uint64_t currentMillis);

/**
 * @brief Check if a specific sensor is pressed (rising edge)
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @return true if sensor was just pressed
 */
bool touch_sensor_is_pressed(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Check if a specific sensor is released (falling edge)
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @return true if sensor was just released
 */
bool touch_sensor_is_released(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Check if a specific sensor is being held
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @return true if sensor is currently pressed
 */
bool touch_sensor_is_held(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Get duration of current press
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @return Duration in milliseconds
 */
uint64_t touch_sensor_get_duration(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Get current beep count
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @return Current beep count
 */
uint8_t touch_sensor_get_beep_count(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Check if a new beep should be triggered based on hold duration
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @param interval_ms Interval in milliseconds between beeps
 * @param beep_index Output beep index (1-based)
 * @return true if a new beep should be played
 */
bool touch_sensor_poll_beep(TouchSensorManager *manager, uint8_t index, uint64_t interval_ms, uint8_t *beep_index);

#endif // TOUCH_SENSOR_H
