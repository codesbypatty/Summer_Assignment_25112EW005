//program to Print reverse pyramid

#include <stdio.h>
int main()
{
    int n,i,j,k;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("\t");
        }
        for(k=2*n;k>=i*2;k--)
        {
            printf("*\t");
        }

        printf("\n");
    }

    return 0;
}