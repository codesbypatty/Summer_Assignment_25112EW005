#include<stdio.h>

void main()
{
    int a[100],n,i,sum=0;
    float avg;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);

        sum=sum+a[i];
    }

    avg=(float)sum/n;

    printf("sum = %d\n",sum);
    printf("average = %.2f",avg);
}