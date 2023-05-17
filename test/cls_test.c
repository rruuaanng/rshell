#include <stdio.h>
#include <string.h>

void cls(char *s){
    int len = strlen(s);
    for(int i = 0; i < len && len > 0;i++){
        if(s[i] == '\n'){
            s[i] = '\000';
        }
    }
}

int main(int argc, char const *argv[])
{
    char m[32] = "ls\n";
    char *s[] = {"ls\n","-l\n"};
    cls(m);
    cls(s[0]);
    // for(int i = 0;i < 2 ;i++){
    //     cls(s[i]);
    // }
    return 0;
}
