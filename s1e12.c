#include <stdio.h>

int main(){

    char isRain ,isFree;
    printf("是否有空？（Y/N）");
    scanf("%c",&isFree);
    // getchar();

    if (isFree =='Y'){
        printf("\n可以约喔。");
    }
    else{
        printf("\n不约。");
    };
    return 0;
}