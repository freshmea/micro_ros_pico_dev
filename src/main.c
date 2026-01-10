#include "board/board.h"
#include "drivers/servo_ctrl.h"
#include "uros/uros_app.h"

int main()
{
    // Initialize board peripherals
    board_init();

    // Initialize servo controller
    if (servo_ctrl_init(SERVO_PIN) != 0)
    {
        printf("ERROR: Failed to initialize servo controller\n");
        board_blink_error();
    }

    // Initialize micro-ROS application
    if (uros_app_init() != 0)
    {
        printf("ERROR: Failed to initialize micro-ROS application\n");
        board_blink_error();
    }

    // Run main application loop
    uros_app_run();

    // Cleanup (unreachable in current implementation)
    uros_app_cleanup();

    return 0;
}
