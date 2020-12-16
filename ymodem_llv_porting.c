#include <stdio.h>
#include <stdlib.h>
#include "ymodem_llv_porting.h"


/**
 *  rx a byte from uart, NO BLOCKING
 *  return 1 = ok 
 *        -1 = gg
 */
int SerialKeyPressed(unsigned char *c)
{
    //printf("SerialKeyPressed\n");
    /*
    if (FLAG) {
        *c = REG; 
        return 1;
    }
    return 0;
    */
}

/**
 *
 *  tx a byte through uart
 */
void SerialPutChar(unsigned char c)
{
    //printf("SerialPutChar\n");
}

int FLASH_PagesMask(int size)
{
    return (size/PAGE_SIZE + 1);
}

/**
 *
 *  return 0 = ok
 */
int FLASH_ErasePage(int addr)
{
#ifdef CONFIG_YMODEM_RX_FLASH
    //flash_erase_page();
#endif

}

/**
 *
 *  return 0 = ok
 */
int FLASH_ProgramWord(int FlashDestination, int RamSource)
{
#ifdef CONFIG_YMODEM_RX_FLASH
    //flash_write_4byte();
#endif
    return 0;
}

void Str2Int(char *file_size, unsigned int *size)
{
    *size = strtoul(file_size, NULL, 16);
}

void Int2Str (char* file_ptr, int leng)
{
  sprintf(file_ptr, "%x", leng);
}
