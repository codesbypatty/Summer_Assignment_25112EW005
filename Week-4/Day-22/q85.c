//Check Palindrome String
#include<stdio.h>

void main()
{
    char str[100];
    int i,length=0,flag=1;

    printf("enter string : ");
    gets(str);

    while(str[length]!='\0')
    {
        length++;
    }

    for(i=0;i<length/2;i++)
    {
        if(str[i]!=str[length-1-i])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("palindrome string");
    }
    else
    {
        printf("not palindrome string");
    }
}