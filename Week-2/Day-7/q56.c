#include<stdio.h>

void main()
{
    int a[100],n,i,j;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    printf("duplicate elements are : \n");

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
}