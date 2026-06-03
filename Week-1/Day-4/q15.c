//program to check armstrong number
#include <stdio.h>
#include <math.h>
void main()
{
    int n,n1,r,s=0,c=0;
    printf("enter the number \n");
    scanf("%d",&n);

    //to count digits
    n1=n;
    while(n1>0)
    {
        c++;
        n1=n1/10;
    }

    //to add digits by raising to power of number of digits
    n1=n;
    while(n1>0)
    {
        r=n1%10;
        s=s+pow(r,c);
        n1=n1/10;
    }

    //to check
    n1=n;
    if(s==n1)
    printf("%d is an armstrong number",n1);
    else
    printf("not armstrong");
}