#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "include/reader.h"
#include "include/parser.h"


int
main(int argc,const char *argv[]){
    static char line[LINE_MAX_LEN]; // 输入的行
    // char save[CMD_MAX_LEN][CMD_MAX_LEN];
    cmd_t cmd;
    int size = 0;
    for(;;){
        readline(line,sizeof(line));
        token(line,cmd.args," ",&size);
        for(int i=0;i<size;i++){
            printf("%s \n",cmd.args[i]);
        }
        clsread(cmd.args,&size);
    }
           
    return 1;
}
