#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[]="I love";
    char str2[]="FishC.com!";
    char str3[100];

    strcat(str1," ");
    strcat(str1,str2);

   
    printf("str1: %s\n",str1);
    return 0;
}

