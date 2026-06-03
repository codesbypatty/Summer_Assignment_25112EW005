//program to check whether a number is prime
#include <stdio.h>
void main()
{
    int i=2,n,c=0;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("not prime");
        c=1;
    }
    while(i<=n/2)
    {
        if(n%i==0)
        c++;
        i++;
        if(c>0)
        {
            printf("not prime");
            break;
        }
    }
    if(c==0)
    printf("prime");
}