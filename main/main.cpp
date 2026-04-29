#include "components_example.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <stdio.h>

extern "C" void app_main(void)
{
    configure_led();

    while (1) {
        int sum = compute_sum(2, 3);
        printf("Hello from main! Sum: %d\n", sum);
        blink_led();
    }
}
