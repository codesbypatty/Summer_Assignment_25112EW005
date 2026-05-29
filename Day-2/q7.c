//program to find product of digits
#include <stdio.h>
void main()
{
    int r,p=1,n;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        p=p*r;
        n=n/10;
    }
    printf("product of digits = %d",p);
}