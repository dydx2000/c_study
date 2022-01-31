#include <stdio.h>

int main()
{

    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(short*));


    int a = 0x1122333;
    int * pa =&a;
    char* pc=&a;
    printf("%p\n",pa);
    printf("%p\n",pc);



    return 0;
}