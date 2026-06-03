//program to find factorial of a given number
#include <stdio.h>
void main()
{
    int i,N,factorial=1;
    printf("enter the number N");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        factorial=factorial*i;
    }
    printf("factorial of %d is equal to %d", N, factorial);
}