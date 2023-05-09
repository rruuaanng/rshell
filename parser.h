#ifndef RSHELL_PARSER_H
#define RSHELL_PARSER_H

struct __cmd{
    char *exec_name; // 可执行文件名称
    int args_num; // 参数个数
    char *args[];  // 参数列表
};
typedef struct __cmd cmd_t;

ssize_t read_line(char **,size_t *);
int execute(cmd_t); // 执行封装后的命令
// 自定义切分

#endif // RSHELL_PARSER_H