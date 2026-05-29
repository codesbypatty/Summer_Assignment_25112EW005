//program to find sum of digits of a number
#include <stdio.h>
void main()
{
    int n,sum=0,r;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    
    printf("sum of digits of the number = %d",sum);
}