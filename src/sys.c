#include "sys.h"

void delay_ms(u32 ms) {
    unsigned char data i, j;
    do {
        i = 29;
        j = 183;
        do {
            while (--j)
                ;
        } while (--i);
    } while (--ms);
}

void delay_us(u32 us) {
    unsigned char data i;

    do {
        _nop_();
        i = 5;
        while (--i)
            ;
    } while (--us);
}

void hal_init_gpio() {
    //ÉèÖÃVFD_EN = ¿ªÂ©Êä³ö
    P1M0 = 0x08;
    P1M1 = 0x08;

    P3M0 = 0x00;
    P3M1 = 0x00;
}