#ifndef UROS_H
#define UROS_H

#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <rclc/rclc.h>
#include <rmw_microros/rmw_microros.h>

/**
 * @brief Initialize micro-ROS main application.
 *
 * Uses the working parameters from main.c (ping timeout/attempts, node/topic names)
 * and sets up the publisher + timer.
 *
 * @return 0 on success, non-zero on error.
 */
int uros_main_init(void);

/**
 * @brief Run micro-ROS executor loop (blocking).
 */
void uros_main_run(void);

/**
 * @brief Spin executor once (non-blocking).
 */
void uros_main_spin_once(void);

/**
 * @brief Cleanup micro-ROS resources.
 */
void uros_main_cleanup(void);

void uros_task(void *params);

#endif // UROS_H
