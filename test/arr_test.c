#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int init_arr(char ***args, int size) {
    *args = (char **)malloc(sizeof(char *) * size);
    for (int i = 0; i < size; i++) {
        (*args)[i] = (char *)malloc(sizeof(char) * size);
    }
    return 1;
}

int main(int argc, char const *argv[]) {
    char **s;
    int size = 5;
    init_arr(&s,size);
    for(int i = 0;i < size;i++){
        strcpy(s[i],"aa");
    }
    for(int i = 0;i < size;i++){
        printf("%s \n",s[i]);
    }
    printf("hello \n");
    return 0;
}
