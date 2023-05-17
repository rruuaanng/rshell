#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include "include/array.h"

int init_arr(char ***args, int size) {
    /**
     * @brief 初始化参数数组
     * @param 1 参数指针
     * @param 2 数组大小
     * @return 是否执行
    */
    int i = 0;
    *args = (char **)malloc(sizeof(char *) * size);
    while(i < size){
        (*args)[i] = (char *)malloc(sizeof(char) * size);
        memset((*args)[i],0,sizeof(char) * size);
        i++;
    }
    (*args)[i] = NULL;
    return 1;
}


int cls_arr(char ***args,int size,int *arg_size){
    /**
     * @brief 释放参数指针空间
     * @param 1 参数指针
     * @param 2 数组大小
     * @param 3 参数个数
     * @return 是否执行
    */
    if(args == NULL) return 0;
    for(int i = 0;i < size;i++){
        free((*args)[i]);
    }
    free(*args);
    *arg_size = 0;
    return 1;
}