#include<stdio.h>

void main()
{
    int a[100],n,i,j,sum;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    printf("enter required sum : ");
    scanf("%d",&sum);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("%d + %d = %d\n",a[i],a[j],sum);
            }
        }
    }
}