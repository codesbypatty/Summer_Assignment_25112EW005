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

    temp=a[n-1];

    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }

    a[0]=temp;

    printf("array after right rotation : \n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}