#include "touch_sensor.h"
#include "hardware/gpio.h"
#include "pico/stdlib.h"

// Touch sensor pin mapping
static const uint8_t touch_pins[TOUCH_SENSOR_COUNT] = {
    TOUCH_PIN_1,
    TOUCH_PIN_2,
    TOUCH_PIN_3
};

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
            }
            sensor->duration = currentMillis - sensor->startTime;
        }
        else
        {
            // Button is released
            if (sensor->lastState)
            {
                // Falling edge - just released
                sensor->lastBeepCount += sensor->beepCount;
            }
            sensor->duration = 0;
            sensor->startTime = 0;
            sensor->beepCount = 0;
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

bool touch_sensor_is_long_press(TouchSensorManager *manager, uint8_t index, uint64_t threshold)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return false;

    return touch_sensor_is_held(manager, index) &&
           touch_sensor_get_duration(manager, index) >= threshold;
}

uint8_t touch_sensor_get_beep_count(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return 0;

    return manager->sensors[index].beepCount;
}

uint8_t touch_sensor_get_last_beep_count(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return 0;

    return manager->sensors[index].lastBeepCount;
}

void touch_sensor_reset_beep_count(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return;

    manager->sensors[index].beepCount = 0;
    manager->sensors[index].lastBeepCount = 0;
}

void touch_sensor_increment_beep_count(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return;

    manager->sensors[index].beepCount++;
}

void touch_sensor_add_to_last_beep_count(TouchSensorManager *manager, uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return;

    manager->sensors[index].lastBeepCount += manager->sensors[index].beepCount;
}

uint8_t touch_sensor_get_pin(uint8_t index)
{
    if (index >= TOUCH_SENSOR_COUNT)
        return 0;

    return touch_pins[index];
}
