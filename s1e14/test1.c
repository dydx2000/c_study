#include <stdio.h>

int main(){

    int i,j;
    int product;
    for (i = 9;i >=1; i--)
        {
            for(j = i;j >= 1;j--)
            
                {
                    product = i*j;  
                    printf("[ %d * %d = %-2d ] ",i,j,j*i);
                }
                printf("\n");

        }
    return 0;
        

}
