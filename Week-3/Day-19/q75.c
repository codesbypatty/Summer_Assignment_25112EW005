#include<stdio.h>

void main()
{
    int a[10][10];
    int r,c,i,j;

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

    printf("transpose matrix : \n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}