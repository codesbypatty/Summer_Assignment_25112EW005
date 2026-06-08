// program to Print hollow square pattern

#include <stdio.h>
int main()
{
    int i,j,n;

    printf("enter the number of lines");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            {
                printf("*\t");   //to print borders
            }
            else printf("\t");   //to print hollow spaces inside
        }
        printf("\n");
    }
}