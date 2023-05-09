#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "parser.h"

ssize_t read_line(char **,size_t *);
int execute(cmd_t); // 执行封装后的命令
`
int
main(int argc, char const *argv[]){
    char *line = NULL; // 输入的行
    size_t size = 0;
    while(read_line(&line,&size) > 0){
        printf("---");
        printf("%s ",line);
    }
    return 0;
}

ssize_t
read_line(char **line,size_t *size){
    /**
     * @brief 读取输入行
     * @param 1 将输入行读入该地址
     * @param 2 读取的字节大小
     * @return 分配的字节数
    */
    printf("input> ");
    return getline(line,size,stdin);
}


int
execute(cmd_t cmd){

}
