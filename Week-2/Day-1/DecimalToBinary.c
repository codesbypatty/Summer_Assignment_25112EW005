//program to convert decimal to binary

#include <stdio.h>

int main()
{
    int n1,n,j,i=0;

    printf("enter a number in decimal");
    scanf("%d", &n);

    n1=n;
    int a[100];

    while(n>0)
    {
        if(n%2==0)
            a[i]=0;
        else
            a[i]=1;

        n = n/2;
        i++;
    }

    printf("%d is represented in binary as ", n1);

    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
}