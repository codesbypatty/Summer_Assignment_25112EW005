#include<stdio.h>

void main()
{
    char str[100];
    int i,count;

    printf("enter string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        count=1;

        while(str[i]==str[i+1])
        {
            count++;
            i++;
        }

        printf("%c%d",str[i],count);
    }
}