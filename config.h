#define _XTAL_FREQ 4000000

void putch(unsigned char dato){
    while (! PIR1bits.TXIF)
        continue;
    TXREG = dato;
}

void iniciar_uart(void){ //funcion para habilitar USART
    TXSTAbits.TXEN = 1;
    RCSTAbits.SPEN = 1; 
}