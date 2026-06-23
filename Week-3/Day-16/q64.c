#include<stdio.h>

void main()
{
    int a[100],n,i,j,k;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }

                n--;
            }
            else
            {
                j++;
            }
        }
    }

    printf("array after removing duplicates : \n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}