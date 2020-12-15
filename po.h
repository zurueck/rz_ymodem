#ifndef PO_H
#define PO_H

#define FILE_BASE_ADDRESS       0x00000000
#define INDEX_YMODEM_SUCCEED    0
#define INDEX_FILE_SIZE         0
//#define NULL 0

//int flash_write((char *) ymodemBuf, store_addr, res);
//int env_set(INDEX_YMODEM_SUCCEED, 0, 1);
void ym_timer_start(void);
int ym_timer_ended(void);
char uart_check_and_get(void);
char uart_get_byte(void);
void udelay(int x);
void mdelay(int x);
extern void uart_send_byte(char c);
extern unsigned short crc16_ccitt(unsigned short cksum, const unsigned char *buf, int len);

int do_ymodem_rx(void);

#endif
