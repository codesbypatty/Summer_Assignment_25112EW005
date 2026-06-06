//program to find largest prime factor
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
    int n,i,largestPrimeFactor=-1;

    printf("enter the number\n");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0&& isPrime(i))
        {
            largestPrimeFactor=i;
        }
    }

    printf("The largest prime factor of %d is %d",n,largestPrimeFactor);
    return 0;
}