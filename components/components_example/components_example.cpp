#include "components_example.h"
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <stdio.h>

#define LED_GPIO GPIO_NUM_8

int compute_sum(int a, int b)
{
    return a + b;
}

int fibonacci(int n)
{
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n)
{
    if (n <= 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void configure_led(void)
{
    gpio_reset_pin(LED_GPIO);
    gpio_set_direction(LED_GPIO, GPIO_MODE_OUTPUT);
}

void blink_led(void)
{
    gpio_set_level(LED_GPIO, 1);
    vTaskDelay(500 / portTICK_PERIOD_MS);
    gpio_set_level(LED_GPIO, 0);
    vTaskDelay(500 / portTICK_PERIOD_MS);
}
