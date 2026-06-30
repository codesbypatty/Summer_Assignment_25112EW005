// program to merge two sorted arrays

#include<stdio.h>

void main()
{
    int a[50],b[50],c[100];
    int n1,n2,i,j,k;

    printf("enter size of first array : ");
    scanf("%d",&n1);

    printf("enter first sorted array : \n");

    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter size of second array : ");
    scanf("%d",&n2);

    printf("enter second sorted array : \n");

    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }

    i=0;
    j=0;
    k=0;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        c[k]=a[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        c[k]=b[j];
        j++;
        k++;
    }

    printf("merged array : \n");

    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}