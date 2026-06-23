#include<stdio.h>

void main()
{
    char str[100];
    int i=0,length=0;

    printf("enter string : ");
    gets(str);

    while(str[i]!='\0')
    {
        length++;
        i++;
    }

    printf("length = %d",length);
}