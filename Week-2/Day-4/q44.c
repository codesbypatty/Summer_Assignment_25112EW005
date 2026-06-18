//program to Write function to find factorial.

#include <stdio.h>

int factorial(int a)
{
    int fact=1,i=1;
    while(i<=a)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}

int main()
{
    int n;

    printf("enter the number");
    scanf("%d",&n);

    printf("factorial of %d is %d",n,factorial(n));

    return 0;
}