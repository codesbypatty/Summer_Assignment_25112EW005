#include<stdio.h>

void main()
{
    int a[10][10];
    int r,c,i,j,sum;

    printf("enter rows and columns : ");
    scanf("%d%d",&r,&c);

    printf("enter matrix : \n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(j=0;j<c;j++)
    {
        sum=0;

        for(i=0;i<r;i++)
        {
            sum=sum+a[i][j];
        }

        printf("sum of column %d = %d\n",j+1,sum);
    }
}