#ifndef RSHELL_READER_H
#define RSHELL_READER_H

#ifndef CMD_MAX_LEN
#define CMD_MAX_LEN 128
#endif // CMD_MAX_LEN

#ifndef LINE_MAX_LEN
#define LINE_MAX_LEN 256
#endif // LINE_MAX_LEN

int readline(char *,int); /* 读取输入字符串 */
void clsread(char [][CMD_MAX_LEN],int *); /* 重置前一次输入字符串 */

#endif // RSHELL_READER_H