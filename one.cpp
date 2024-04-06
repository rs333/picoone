#include <pico/stdlib.h>
#include <boards/pico.h>
#include <stdio.h>
#include <pico/stdio.h>

int main(int argc, char ** argv){

    stdio_uart_init();
    const uint16_t LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while(true){
        printf("Blink On\n");
        gpio_put(LED_PIN, true);
        sleep_ms(1000);
        printf("Blink Off\n");
        gpio_put(LED_PIN, false);
        sleep_ms(1000);        
    }
    



}