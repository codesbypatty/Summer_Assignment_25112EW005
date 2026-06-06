//program to convert binary to decimal number
#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,s,n1;
    printf("enter the number");
    scanf("%d",&n);

    i=0;
    s=0;
    n1=n;

    while(n>0)
    {
        //instead of extractiong the digit and checking, I am simply just checking the remainder since 1 would give remainder and 0 wouldn't
        if(n%2==1)
        s=s+pow(2,i);  
        i++;
        n=n/10;  //to remove used digit
    }

    printf("%d is represented in decimal as %d",n1,s);
}
