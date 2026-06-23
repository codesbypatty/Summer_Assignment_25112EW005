#include<stdio.h>

void main()
{
    int a[100],n,i,j,count,max=0,element;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }

        if(count>max)
        {
            max=count;
            element=a[i];
        }
    }

    printf("maximum frequency element = %d",element);
}