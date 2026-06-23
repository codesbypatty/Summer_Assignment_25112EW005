#include<stdio.h>

void main()
{
    char str[100];
    int i=0,count=1;

    printf("enter sentence : ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count++;
        }

        i++;
    }

    printf("total words = %d",count);
}