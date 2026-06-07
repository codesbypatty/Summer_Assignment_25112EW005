// program to find sum of digits of a number using recursion

#include <stdio.h>

int sum(int n)
{
    if(n==0)
    return 0;

    return (n%10)+sum(n/10);
}

int main()
{

    int n;

    printf("Enter the number");
    scanf("%d",&n);

    printf("sum of digits of %d is %d",n,sum(n));

    return 0;
}