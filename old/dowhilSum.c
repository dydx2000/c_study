#include <stdio.h>

int main(){

    int i=0;
    int sum =0;
    do{
        sum = sum +i;
        i = i +1;
    }while (i<=100);
  
    printf("sum is %d ",sum);
    
    return 0;
}
