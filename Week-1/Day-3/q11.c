//program to find gcd of two numbers
#include <stdio.h>
void main()
{
    int a,b,i,gcd;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        gcd=i;
    }
    printf("greatest common divisor of %d and %d is %d",a,b,gcd);
}