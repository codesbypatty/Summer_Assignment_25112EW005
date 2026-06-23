#include<stdio.h>

void main()
{
    int a[100],n,i;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    printf("array elements are : \n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}