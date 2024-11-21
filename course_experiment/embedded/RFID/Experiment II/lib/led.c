#include <led.h>
#include <ioCC2530.h>

void LED_Init(void){
    P1DIR |= 0x03;
    LED1 = 0;
    LED2 = 0;
}
