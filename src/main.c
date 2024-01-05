#include "gui.h"

static const char buf[10] = {0};
static uint8_t cnt = 0;
void main() {
    P_SW2 |= 0x80;  // 使能EAXFR寄存器 XFR
    hal_init_gpio();
    delay_ms(500);
    vfd_gui_init();
    vfd_gui_set_blk_level(7);
    while (1) {
        memset(buf, 0, sizeof(buf));
        if (cnt >= 10) {
            cnt = 0;
        }
        // if(cnt == 5){ //可选停止供电2秒再次开启供电
        //     VFD_EN = 0;
        //     delay_ms(2000);
        //     VFD_EN = 1;
        // }
        sprintf(buf, "%bd%bd%bd%bd%bd%bd%bd%bd%bd", cnt, cnt, cnt, cnt, cnt,
                cnt, cnt, cnt, cnt);
        vfd_gui_set_text(buf, 0, 0);
        cnt++;
        delay_ms(300);
    }
}