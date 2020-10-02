#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,i;

    printf("请输入字符的个数：");
    scanf("%d",&n);

    char a[n+1];

    printf("请开始输入字符；");
    getchar();
    for ( i = 0; i < n; i++)
    {
        /* code */
        scanf("%c",&a[i]);

    }
    a[n]='\0';
    printf("你输入的字符串是：%s\n",a);

    return 0;
}
