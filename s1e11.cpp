#include <stdio.h>

int main() 
{

    int i;
    printf("你多大了");
    scanf("%d", &i);

    if (i>=18)
    {
        printf("进门左拐\n");

    }
    else
    {
        printf("慢走不送");
    }
    
    return 0;
}
