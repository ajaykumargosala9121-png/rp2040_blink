#include "pico/stdlib.h"
#include <stdio.h>

int main()
{
    stdio_init_all();

    gpio_init(25);
    gpio_set_dir(25,GPIO_OUT);

    while(1)
    {
        gpio_put(25,1);
        printf("LED on\n");
        sleep_ms(1500);
        gpio_put(25,0);
        printf("LED off\n");
        sleep_ms(1500);    
    }
}