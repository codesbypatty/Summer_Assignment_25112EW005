#include<stdio.h>

void main()
{
    char str[100];
    int i=0,len=0,max=0,start=0,tempstart=0;

    printf("enter sentence : ");
    gets(str);

    while(1)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            if(len>max)
            {
                max=len;
                start=tempstart;
            }

            len=0;
            tempstart=i+1;
        }
        else
        {
            len++;
        }

        if(str[i]=='\0')
        {
            break;
        }

        i++;
    }

    printf("longest word : ");

    for(i=start;i<start+max;i++)
    {
        printf("%c",str[i]);
    }
}