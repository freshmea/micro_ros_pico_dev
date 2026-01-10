#ifndef UROS_APP_H
#define UROS_APP_H

#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <rclc/rclc.h>

/**
 * @brief Initialize micro-ROS application
 *
 * Sets up WiFi transport, connects to agent, and initializes node
 *
 * @return 0 on success, non-zero on error
 */
int uros_app_init(void);

/**
 * @brief Run micro-ROS executor loop
 *
 * Spins executor to process callbacks
 */
void uros_app_run(void);

/**
 * @brief Cleanup micro-ROS resources
 */
void uros_app_cleanup(void);

#endif // UROS_APP_H
