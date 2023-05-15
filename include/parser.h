#ifndef RSHELL_PARSER_H
#define RSHELL_PARSER_H

#ifndef CMD_MAX_LEN
#define CMD_MAX_LEN 128
#endif // CMD_MAX_LEN

#ifndef LINE_MAX_LEN
#define LINE_MAX_LEN 256
#endif // LINE_MAX_LEN 

#ifndef ARGMENT_MAX_LEN
#define ARGMENT_MAX_LEN 32
#endif // ARGMENT_MAX_LEN

struct __cmd{
    char *exec_name; // 可执行文件名称
    int args_num; // 参数个数 
    char args[ARGMENT_MAX_LEN][CMD_MAX_LEN];  // 参数列表
};
typedef struct __cmd cmd_t;

int execute(cmd_t);                  /* 执行封装后的命令 */ 
int token(char *,char [][CMD_MAX_LEN],const char *,int *);  /* 解析输入行 */ 

#endif // RSHELL_PARSER_H
