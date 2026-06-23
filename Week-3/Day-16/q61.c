#include<stdio.h>

void main()
{
    int a[100],n,i,sum=0,total,missing;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n-1;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }

    total=(n*(n+1))/2;

    missing=total-sum;

    printf("missing number = %d",missing);
}