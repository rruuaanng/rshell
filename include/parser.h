#ifndef RSHELL_PARSER_H
#define RSHELL_PARSER_H

#ifndef LINE_MAX_LEN
#define LINE_MAX_LEN 256
#endif // LINE_MAX_LEN 

struct __cmd{
    char exec[LINE_MAX_LEN]; // 可执行文件名称
    int size; // 参数个数 
    char **args;  // 参数列表
};
typedef struct __cmd cmd_t;

int execute(cmd_t);                  /* 执行封装后的命令 */ 
int token(char *,char *,char ***,const char *,int *);  /* 解析输入行 */ 

#endif // RSHELL_PARSER_H
