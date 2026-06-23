#include<stdio.h>

void main()
{
    int a[10][10];
    int n,i,j,sum=0;

    printf("enter order of matrix : ");
    scanf("%d",&n);

    printf("enter matrix : \n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i][i];
    }

    printf("diagonal sum = %d",sum);
}