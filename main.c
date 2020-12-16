#include <stdio.h>
#include "ymodem.h"

int main(void) {
    unsigned char buff[4097];

    printf("YMdebug %s -- 1:1\n", __FUNCTION__);

    Ymodem_Receive(buff);

    Ymodem_Transmit(buff, "test", 3000);

    return 0; 
}
