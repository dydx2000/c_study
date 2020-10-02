#include <stdio.h>

int main(){

    char ch;
    scanf("%s",ch);

    switch (ch)
    {
    case    'A':printf("90-100.");
        break;
    case    'B':printf("80-90.分。。。");
        break;
    case    'C':printf("60-70.分！");
            
        break;
    
    default: printf("输入不正确.");
        break;
    }
    return 0;
}

