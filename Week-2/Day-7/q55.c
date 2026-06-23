#include<stdio.h>

void main()
{
    int a[100],n,i,largest,second;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    largest=second=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second && a[i]!=largest)
        {
            second=a[i];
        }
    }

    printf("second largest = %d",second);
}