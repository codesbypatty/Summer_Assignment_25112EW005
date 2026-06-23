#include<stdio.h>

void main()
{
    int a[50],b[50];
    int n1,n2,i,j;

    printf("enter size of first array : ");
    scanf("%d",&n1);

    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter size of second array : ");
    scanf("%d",&n2);

    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("common elements : ");

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
}