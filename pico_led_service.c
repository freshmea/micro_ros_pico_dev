#include <rcl/error_handling.h>
#include <rcl/rcl.h>
#include <rclc/executor.h>
#include <rclc/rclc.h>
#include <rmw_microros/rmw_microros.h>

#include "pico/stdlib.h"
#include "pico_uart_transports.h"
#include "std_srvs/srv/set_bool.h"

#define RCCHECK(fn)                                                                      \
    {                                                                                    \
        rcl_ret_t temp_rc = fn;                                                          \
        if ((temp_rc != RCL_RET_OK))                                                     \
        {                                                                                \
            printf("Failed status on line %d: %d. Aborting.\n", __LINE__, (int)temp_rc); \
            return 1;                                                                    \
        }                                                                                \
    }
#define RCSOFTCHECK(fn)                                                                    \
    {                                                                                      \
        rcl_ret_t temp_rc = fn;                                                            \
        if ((temp_rc != RCL_RET_OK))                                                       \
        {                                                                                  \
            printf("Failed status on line %d: %d. Continuing.\n", __LINE__, (int)temp_rc); \
        }                                                                                  \
    }

const uint LED_PIN = 2;

rcl_publisher_t publisher;
rcl_subscription_t subscriber;
std_msgs__msg__Int32 msg;
std_msgs__msg__Int32 msg_recieved;
bool led_on = false;

void service_callback(const void *req, void *res)
{
    std_srvs__srv__SetBool_Request *request = (std_srvs__srv__SetBool_Request *)req;
    std_srvs__srv__SetBool_Response *response = (std_srvs__srv__SetBool_Response *)res;
    if (led_on != request->data)
    {
        gpio_put(LED_PIN, request->data);
        response->message = "request success";
        response->success = true;
    }
    else
    {
        response->message = "request failed";
        response->success = false;
    }
}

int main()
{
    rmw_uros_set_custom_transport(
        true,
        NULL,
        pico_serial_transport_open,
        pico_serial_transport_close,
        pico_serial_transport_write,
        pico_serial_transport_read);

    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    rcl_node_t node = rcl_get_zero_initialized_node();
    rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
    rcl_allocator_t allocator = rcl_get_default_allocator();
    rclc_support_t support;
    rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
    rcl_service_t service;

    // Wait for agent successful ping for 2 minutes.
    const int timeout_ms = 1000;
    const uint8_t attempts = 120;
    RCCHECK(rcl_init_options_init(&init_options, allocator));
    RCCHECK(rcl_init_options_set_domain_id(&init_options, 15));
    rmw_uros_ping_agent(timeout_ms, attempts);

    RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));

    RCCHECK(rclc_node_init_default(&node, "pico_node", "", &support));

    RCCHECK(rclc_service_init_default(
        &service,
        &node,
        ROSIDL_GET_SRV_TYPE_SUPPORT(std_srvs, srv, SetBool),
        "led_service",
        service_callback));

    rclc_executor_init(&executor, &support.context, 1, &allocator);
    std_srvs__srv__SetBool_Response res;
    std_srvs__srv__SetBool_Request req;
    rclc_executor_add_service(&executor, &service, &req, &res, service_callback);

    rclc_executor_spin(&executor);

    RCCHECK(rcl_subscription_fini(&subscriber, &node));
    RCCHECK(rcl_node_fini(&node));
}
