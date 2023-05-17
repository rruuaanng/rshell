#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "include/reader.h"
#include "include/parser.h"


int
execute(cmd_t cmd){
    if(cmd.args[cmd.size - 1] != NULL){
        cmd.args[cmd.size] = NULL;
    }
    execvp(cmd.exec,cmd.args);
    return 1;
}

int token(char *src,char *exec,char ***args,const char *dlim,int *size){
	/**
	 * @brief 输入行
     * @param 1 可执行文件名称
     * @param 2 参数列表
     * @param 3 分隔符
     * @param 4 参数数量(包括可执行文件)
     * @return 是否执行
	*/
    char *buf = strtok(src, dlim);
    strcpy(exec,buf);
    while(buf){
        if(strlen(buf) > 0){
            strcpy((*args)[(*size)++],buf);
        }
        buf = strtok(NULL, dlim);
    }
    return 1;
}

