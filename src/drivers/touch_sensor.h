#ifndef TOUCH_SENSOR_H
#define TOUCH_SENSOR_H

#include <stdint.h>
#include <stdbool.h>
#include "pico/stdlib.h"

#define TOUCH_SENSOR_COUNT 3
#define TOUCH_PIN_1 18
#define TOUCH_PIN_2 19
#define TOUCH_PIN_3 20
#define LONG_PRESS_THRESHOLD_MS 1000

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
 * @brief Check if sensor is long pressed
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @param threshold Threshold in milliseconds
 * @return true if held longer than threshold
 */
bool touch_sensor_is_long_press(TouchSensorManager *manager, uint8_t index, uint64_t threshold);

/**
 * @brief Get current beep count
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @return Current beep count
 */
uint8_t touch_sensor_get_beep_count(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Get last beep count
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 * @return Last beep count
 */
uint8_t touch_sensor_get_last_beep_count(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Reset beep count for specific sensor
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 */
void touch_sensor_reset_beep_count(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Increment beep count for specific sensor
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 */
void touch_sensor_increment_beep_count(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Add current beep count to last beep count
 * @param manager Pointer to TouchSensorManager instance
 * @param index Sensor index (0-2)
 */
void touch_sensor_add_to_last_beep_count(TouchSensorManager *manager, uint8_t index);

/**
 * @brief Get pin number for sensor
 * @param index Sensor index (0-2)
 * @return GPIO pin number
 */
uint8_t touch_sensor_get_pin(uint8_t index);

#endif // TOUCH_SENSOR_H
