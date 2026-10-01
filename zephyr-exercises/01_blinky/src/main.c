#include <zephyr/kernel.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    bool led_on = false;

    while (1) {
        led_on = !led_on;

        printf("Led is %s\n", led_on ? "on" : "off");

        k_sleep(K_SECONDS(1));

    }

    return 0;

}
