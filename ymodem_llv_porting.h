#ifndef YMODEM_LLV_PORTING_H
#define YMODEM_LLV_PORTING_H

typedef unsigned int        uint32_t;
typedef unsigned char       uint8_t;
typedef unsigned short      uint16_t;
typedef int                 int32_t; 

/* if one attend to write file into flash, add this config */
//#define CONFIG_YMODEM_RX_FLASH


#define FLASH_Status        int
#define FLASH_COMPLETE      0

/* available flash size */
#define FLASH_SIZE          0x10000

/* flash erase page size */
#define PAGE_SIZE           0x200

/* max file size */
#define FLASH_IMAGE_SIZE    0x800

/* flash address for rx write */
#define ApplicationAddress  0


/* functions need to be implement */
int SerialKeyPressed(unsigned char *c);
void SerialPutChar(unsigned char c);

int FLASH_PagesMask(int size);
int FLASH_ErasePage(int addr);
int FLASH_ProgramWord(int FlashDestination, int RamSource);

/* completed functions */
void Str2Int(char *file_size, unsigned int *size);
void Int2Str (char* file_ptr, int leng);

#endif
