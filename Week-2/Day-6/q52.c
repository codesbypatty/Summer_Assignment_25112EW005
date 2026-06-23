#include<stdio.h>

void main()
{
    int a[100],n,i,even=0,odd=0;

    printf("enter size of array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element : ");
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("even elements = %d\n",even);
    printf("odd elements = %d",odd);
}