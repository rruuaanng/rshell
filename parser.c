#include <stdio.h>
#include <string.h>
#include "include/parser.h"


int
execute(cmd_t cmd){
	return 1;
}

int token(char *src,char desc[][CMD_MAX_LEN],const char *dlim,int *size){
	/**
	 * @brief 解析输入行
	*/
    int n = 0;
    char *buf = strtok(src, dlim);
    while(buf){
        strcpy(desc[n], buf); 
        buf = strtok(NULL, dlim);
        (*size)++;
        n++;
    }
    return n;
}

