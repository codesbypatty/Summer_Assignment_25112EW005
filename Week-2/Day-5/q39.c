// program to Print number pyramid

#include <stdio.h>
int main()
{
    int n,i,j,k;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("\t");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d\t",k);
        }
        for(k=i-1;k>=1;k--)
        {
             printf("%d\t",k);
        }

        printf("\n");
    }

    return 0;
}