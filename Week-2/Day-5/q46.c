#include<stdio.h>

int armstrong(int n)
{
    int temp, rem, sum=0;

    temp=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(temp==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int n;

    printf("enter the number : ");
    scanf("%d",&n);

    if(armstrong(n))
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
}