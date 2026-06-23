#include<stdio.h>

void main()
{
    int a[100],n,i,j=0,temp;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }

    printf("array after moving zeroes : \n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}