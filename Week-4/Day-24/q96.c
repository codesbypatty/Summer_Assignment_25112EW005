#include<stdio.h>

void main()
{
    char str[100];
    int i,j,flag;

    printf("enter string : ");
    gets(str);

    printf("string after removing duplicates : ");

    for(i=0;str[i]!='\0';i++)
    {
        flag=0;

        for(j=0;j<i;j++)
        {
            if(str[i]==str[j])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            printf("%c",str[i]);
        }
    }
}