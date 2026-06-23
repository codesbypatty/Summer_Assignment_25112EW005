#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100],str2[100],temp[200];

    printf("enter first string : ");
    gets(str1);

    printf("enter second string : ");
    gets(str2);

    strcpy(temp,str1);
    strcat(temp,str1);

    if(strstr(temp,str2))
    {
        printf("rotation string");
    }
    else
    {
        printf("not rotation string");
    }
}