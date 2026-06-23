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

    printf("reversed string : ");

    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}