#include <stdio.h>
#include "po.h"

int main(void) {

    printf("YMdebug %s -- 1:1\n", __FUNCTION__);
    do_ymodem_rx();

    return 0; 
}
