#include <ioCC2530>
#include <delay.h>
#include <led.h>
#include <uart.h>
#include <string.h>

#define uint unsigned int
#define uint unsigned char

char RXdata[3];
char temp;
char RXTXflag;
int datanumber = 0;

void processCommand(void);

void main(){
    LED_Init();
    InitUART();
    datanumber = 0;
    RXTXflag = 1;

    while(1){
        if(RXTXflag == 1){
            if(temp != 0){
                if((temp != '#') && (datanumber < 3))
                    RXdata[datanumber++] = temp;
                else {
                    RXTXflag = 3;
                }
                temp = 0;
            }
       }
        if(RXTXflag == 3){
            U0CSR &= ~0x40;
            Uart_Send_String(RXdata ,datanumber);
            U0CSR |= 0x40;
            RXTXflag = 1;
            datanumber = 0;

            processCommand();
        }

    }
}

void processCommand(void){
    if(RXTXflag[0] == 'L' && (RXTX[1] == '1' || RXTX[1] == '2')){
        if(RXdata[1] == '1'){
            LED = ~LED1;
        }else if(RXdata[1] = '2'){
            LED = ~LED2;
        }
    }
}

#pradma vector = URX0_VECTOR
_interrupt void UART_ISR9=(void){
    URX0IF = 0;
    temp = U0DBUF;
}
