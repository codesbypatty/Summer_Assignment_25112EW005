#include<stdio.h>

void main()
{
    char str1[100],str2[100];
    int i,j,len1=0,len2=0,temp;
    int flag=1;

    printf("enter first string : ");
    gets(str1);

    printf("enter second string : ");
    gets(str2);

    while(str1[len1]!='\0')
    {
        len1++;
    }

    while(str2[len2]!='\0')
    {
        len2++;
    }

    if(len1!=len2)
    {
        printf("not anagram");
        return;
    }

    for(i=0;i<len1-1;i++)
    {
        for(j=i+1;j<len1;j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }

            if(str2[i]>str2[j])
            {
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }

    for(i=0;i<len1;i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
    {
        printf("anagram strings");
    }
    else
    {
        printf("not anagram");
    }
}