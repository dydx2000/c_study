# include<stdio.h>

int main()
{
    int a=1;
    int b=2;
    int c=3;

    int *arr2[3] ={&a,&b,&c};

    int i =0;
    for (i=0;i<3;i++)
    {
        printf("%d ",*(arr2[i]));
    }
}


