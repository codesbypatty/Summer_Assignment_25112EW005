//program to Print star pyramid

#include <stdio.h>
int main()
{
    int n,i,j,k;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("\t");
        }
        for(k=0;k<=i*2;k++)
        {
            printf("*\t");
        }

        printf("\n");
    }

    return 0;
}