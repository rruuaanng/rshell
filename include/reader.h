#ifndef RSHELL_READER_H
#define RSHELL_READER_H

#ifndef LINE_MAX_LEN
#define LINE_MAX_LEN 256
#endif // LINE_MAX_LEN


int readline(char *,int); /* 读取输入字符串 */
void clsenter(char *);  /* 若参数为1时,去除可执行文件的回车符*/
void clsargs_enter(char ***,int *); /* 若参数大于1时,去除参数列表中的回车符*/

#endif // RSHELL_READER_H