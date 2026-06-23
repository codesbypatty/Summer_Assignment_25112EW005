#include<stdio.h>

void main()
{
    char str[100];
    int i,j,count;

    printf("enter string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        count=0;

        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }

        if(count==1)
        {
            printf("first non repeating character = %c",str[i]);
            break;
        }
    }
}