#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[32]="hello aaa aaa";
    char res[32][32];
    int n = 0,size = 0;
    char *s = strtok(str," ");
    while(s){
        strcpy(res[n],s);
        s = strtok(NULL," ");
        size++;
        n++;
    }
    for(int i = 0;i < size; i++){
        printf("%s \n",res[i]);
    }
    return 0;
}
