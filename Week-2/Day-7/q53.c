#include<stdio.h>

void main()
{
    int a[100],n,i,key,flag=0;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    printf("enter element to search : ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("element found at position %d",i+1);
            flag=1;
            break;
        }
    }

    if(flag==0)
    {
        printf("element not found");
    }
}