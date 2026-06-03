//program to reverse a number
#include <stdio.h>
void main()
{
    int n,n2=0,r;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n2=(n2*10)+r;
        n=n/10;
    }
    printf("reverse = %d",n2);
}