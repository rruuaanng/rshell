#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "include/reader.h"

int
readline(char *buf,int size){
    /**
     * @brief 读取输入行
     * @param 1 保存到该地址
     * @param 2 读取字节大小
     * @return 是否执行
    */
    printf("$ >");
    memset(buf, 0, size);
    fgets(buf, size, stdin);
    if(buf[0] == 0) return 1;
    else return 0;
}

void
clsenter(char *exec){
    /**
     * @brief 去除执行文件的换行符
    */
    int len = strlen(exec);
    for(int i = 0; i < len && len > 0;i++){
        if(exec[i] == '\n'){
            exec[i] = '\000';
        }
    }
}

void
clsargs_enter(char ***args,int *size){
    /**
     * @brief 去除参数列表中的换行符
    */
    for(int i = 0;i < (*size);i++){
        clsenter((*args)[i]);
    }
}
