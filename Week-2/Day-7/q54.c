#include<stdio.h>

void main()
{
    int a[100],n,i,key,count=0;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    printf("enter element to find frequency : ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            count++;
        }
    }

    printf("frequency = %d",count);
}