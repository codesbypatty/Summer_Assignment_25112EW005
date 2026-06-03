//program to find lcm of 2 numbers
//lcm=a*b/gcd
#include <stdio.h>
void main()
{
    int a,b,i,gcd,lcm;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        gcd=i;
    }
    lcm = (a*b)/gcd;
    printf("LCM of %d and %d is %d",a,b,lcm);
}