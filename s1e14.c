#include <stdio.h>

int main()
{
    int i,num;
    _Bool flag =1;

    printf("请输入一个整数：");

    scanf("%d",&num);

    if(num==1){

        printf("%d 不是素数\n",num);

    }else{

        for (i=2;i<num/2;i++){

            if (num % i ==0){
                flag =0;
                break;
            }

        }

        if (flag){
            printf("%d 是素数\n",num);

        }else{
            printf("%d 不是素数\n",num);
        }

    }

    
    return 0;

}