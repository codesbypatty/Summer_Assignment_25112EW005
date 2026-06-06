//program to check whether a number is strong or not
#include <stdio.h>
void main()
{
    int i,j,r,n,s=0,fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=n;i>0;i=i/10)
    {
        fact=1;
        r=i%10;
        for(j=1;j<=r;j++)
        fact=fact*j;
        s=s+fact;
    }
    if(s==n)
    printf("strong number");
    else
    printf("not strong number");
}