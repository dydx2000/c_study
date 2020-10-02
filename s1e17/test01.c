#include <stdio.h>

int main()
{
    // int b[10]={0};
    // int c[4]={2,3,2,3};
    int a[10]={1,3,3,2};
    int i;
    for(i=0;i<10;i++){

        // a[i]=i;
        printf("%d\n",a[i]);

    }
    printf("%d\n",sizeof(a));
    return 0;
}


