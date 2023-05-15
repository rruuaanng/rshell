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
    memset(buf, 0, size);
    fgets(buf, size, stdin);
    if(buf[0] == 0) return 1;
    else return 0;
}

void
clsread(char buf[][CMD_MAX_LEN],int *size){
    /**
     * @brief 重置前一次读取buf
     * @param 1 解析后的命令buf
     * @param 2 参数个数
     * @return void
    */
    for(int i = 0;i<(*size);i++){
        memset(buf[i],0,CMD_MAX_LEN);
    }
}