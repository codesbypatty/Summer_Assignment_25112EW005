// program to Print character pyramid.

#include <stdio.h>
int main()
{
    int n,i,j,k;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i='A';i<'A'+n;i++)
    {
        for(j='A'+n;j>=i;j--)
        {
            printf("\t");
        }
        for(k='A';k<=i;k++)
        {
            printf("%c\t",k);
        }
        for(k=i-1;k>='A';k--)
        {
             printf("%c\t",k);
        }

        printf("\n");
    }

    return 0;
}