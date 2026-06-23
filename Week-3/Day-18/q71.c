#include<stdio.h>

void main()
{
    int a[100],n,i,key;
    int low,high,mid,flag=0;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter element to search : ");
    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    if(flag==1)
    {
        printf("element found");
    }
    else
    {
        printf("element not found");
    }
}