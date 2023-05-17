#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "include/array.h"
#include "include/reader.h"
#include "include/parser.h"

/**
 * 现有问题
 * 输入ls -l后
 * 再次输入类似pwd的无参命令时异常
 * 每次重置时将参数列表恢复干净
*/

int main(int argc, const char *argv[]) {
    char line[LINE_MAX_LEN]; // 输入的行
    cmd_t cmd = {0}; /* 封装了输入命令 */
    int status, pid;
    char *e;
    char **as;
    for (;;) {
        readline(line, sizeof(line));
        init_arr(&(cmd.args),ARR_MAX_LEN);
        token(line,cmd.exec,&(cmd.args)," ",&(cmd.size));
        clsenter(cmd.exec); /* 清除命令中的换行符 */
        clsargs_enter(&(cmd.args),&(cmd.size));
#if TEST
        for(int i = 0;i < cmd.size;i++){
            printf("arg: %s \n",cmd.args[i]);
        }
        printf("exec: %s \n",cmd.exec);
        printf("size: %d \n",cmd.size);
#endif // TEST
        pid = fork();
        if(pid < 0) exit(EXIT_FAILURE);
        if(pid == 0){
            execute(cmd);
            cls_arr(&(cmd.args),ARR_MAX_LEN,&(cmd.size));
            exit(EXIT_SUCCESS); /* 退出子进程 */
        }
        else  waitpid(pid, &status, 0);
        cls_arr(&(cmd.args),ARR_MAX_LEN,&(cmd.size));
    }
    return 0;
}


