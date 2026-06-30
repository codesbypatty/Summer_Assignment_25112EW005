// program to find common characters in strings

#include<stdio.h>

void main()
{
    char str1[100],str2[100];
    int i,j;

    printf("enter first string : ");
    gets(str1);

    printf("enter second string : ");
    gets(str2);

    printf("common characters are : ");

    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j])
            {
                printf("%c ",str1[i]);
                break;
            }
        }
    }
}