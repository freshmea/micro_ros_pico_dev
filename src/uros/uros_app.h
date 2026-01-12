#ifndef UROS_APP_H
#define UROS_APP_H

#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <rclc/rclc.h>
#include <rmw_microros/rmw_microros.h>

/**
 * @brief Initialize micro-ROS application
 *
 * Sets up WiFi transport, connects to agent, and initializes node
 *
 * @return 0 on success, non-zero on error
 */
int uros_app_init(void);

/**
 * @brief Run micro-ROS executor loop (blocking)
 *
 * Spins executor to process callbacks indefinitely
 */
void uros_app_run(void);

/**
 * @brief Spin executor once (non-blocking)
 *
 * Processes pending callbacks and returns immediately
 * Use this in FreeRTOS tasks
 */
void uros_app_spin_once(void);

/**
 * @brief Cleanup micro-ROS resources
 */
void uros_app_cleanup(void);

#endif // UROS_APP_H

