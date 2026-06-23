#include<stdio.h>

int fibonacci(int n)
{
    int a=0,b=1,c,i;

    if(n==1)
    {
        return a;
    }

    if(n==2)
    {
        return b;
    }

    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    return c;
}

void main()
{
    int n;

    printf("enter the term number : ");
    scanf("%d",&n);

    printf("fibonacci term = %d",fibonacci(n));
}