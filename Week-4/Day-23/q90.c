#include<stdio.h>

void main()
{
    char str[100];
    int i,j;

    printf("enter string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                printf("first repeating character = %c",str[i]);
                return;
            }
        }
    }

    printf("no repeating character found");
}