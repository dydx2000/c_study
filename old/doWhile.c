#include <stdio.h>

int main(){
    char password[20] = "jack";
    char str[8];

    do{
        printf(str);
        printf("\n请输入密码：\n");
        scanf("s",&str);
        sprintf(str,"\n");
    }      

    
    while (password == str);
    return 0;

}
