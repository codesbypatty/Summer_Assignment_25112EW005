#include<stdio.h>

void main()
{
    int a[100],n,i,temp;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    temp=a[0];

    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }

    a[n-1]=temp;

    printf("array after left rotation : \n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}