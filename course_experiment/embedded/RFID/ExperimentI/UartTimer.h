#include <ioCC2530.h>

typedef unsigned char uchar;
typedef unsigned int uint;

#define DISABLE_ALL_INTERRUPTS() (IEN0 = IEN1 =IEN2 = 0x00)

void InitClock(void){
    CLKCONCMD &= ~0x40;
    while(CLKCONSTA & 0x40);
    CLKCONCMD &= ~0x47;
}

void InitT3(void){
    T3CCTL0 = 0x44;
    T3CC0 = 0xFA;
    T3CTL |= 0x9A;
    IEN1 |= 0x08;
    IEN0 |= 0x80;
}

void InitUART(void){
    PERCFG = 0x00;
    P0SEL = 0x3C;

    P2DIR &= ~0xC0;
    U0CSR |= 0x80;
    U0GCR |= 11;
    U0BAUD |= 216;

    UTX0IF = 1;
    U0CSR |= 0x40;
    IEN0 |= 0x84;
}

void UartSendString(char *Data, int len){
    unit i;

    for(i = 0; i < len ; i++){
        U0DBUF = *Data++;
        while(UTX0IF == 0);
        UTX0IF = 0;
    }

    U0DBUF = 0x0A;
    while(UTX0IF == 0);
    UTX0IF = 0;
}

void DelayMS(unit msec){
    unit i,j;

    for(i = 0; i< mesc ; i++){
        for(j = 0; j < 1060; j++)
    }
}
