#include<stdio.h>

void main()
{
    int a[100],n,i,largest,smallest;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    largest=a[0];
    smallest=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }

        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }

    printf("largest = %d\n",largest);
    printf("smallest = %d",smallest);
}