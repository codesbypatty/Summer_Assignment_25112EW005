// program to Write function to check prime.

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int a)
{
    for(int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;

    printf("enter the number");
    scanf("%d",&n);

    if(isPrime(n)&&(n>1))
    printf("prime");
    else
    printf("not prime");

    return 0;
}