#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 包含stdlib.h头文件以使用malloc和free函数

int main(int argc, char const *argv[])
{
    char *exec = "ls";
    char *s[] = {"ls", "-l"};
    char **args = (char **)malloc(sizeof(char *) * 3); // 分配足够的内存来容纳两个字符串指针（包括NULL结束符）
    for (int i = 0; i < 2; i++) {
        args[i] = (char *)malloc(sizeof(char) * 3); // 分配足够的内存来容纳字符串（包括NULL结束符）
        strcpy(args[i], s[i]); // 复制字符串到args数组中
    }
    args[2] = ""; // 最后一个指针必须为NULL，表示参数列表结束
    args[3] = NULL;
    execvp(exec, args); // 执行命令

    // 释放分配的内存
    for (int i = 0; i < 2; i++) {
        free(args[i]);
    }
    free(args);

    return 0;
}
