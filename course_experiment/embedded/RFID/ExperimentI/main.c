#include <stdio.h>
#include <string.h>
#include "UarTime.h"

void InitSensor(void){
    DISABLE_ALL_INTERRUPTS();
    InitClock();
    TR0 = 0x01;
    ATEST = 0x01;
}

float GetTemperature(void){
    unit value;

    ADCCON3 = (0x3E);
    ADCCON1 |= 0x30;
    ADCCON1 |= 0x40;
    while(!(ADCCON1 & 0x80));
    value = ADCL >> 4;
    value |= (((unit)ADCH) << 4);

//  return (value - 1367.5)/4.5 - 5;
    return (value - (1480 - 4.5*2.5))/4.5;
}

void main(void){
    char i;
    float AvgTemp;
    char strTemp[20];

    InitUART();
    InitSensor();

    while(1){
        AvgTemp = GetTemperature();

        for(i = 0; i < 63; i++){
            AvgTemp += GetTemperature();
            AvgTemp = AvgTemp/2;
        }

        memst(strTemp, 0 ,20);
        sprintf(strTemp, "%.02f °C   ", AvgTemp);
        UartSendString(strTemp, strlen(strTemp));
        DelayMS(1000);
    }
}
