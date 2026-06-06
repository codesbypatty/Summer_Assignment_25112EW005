//Program to find x^n without pow

#include <stdio.h>

int main()
{
    int x,n,result=1,i;
    
    printf("enter the value of x");
    scanf("%d",&x);

    printf("enter the value of n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)     //runs the loop n times
    {
        result*=x;        //multiplies x each time the loop runs
    }

    printf("the result of %d^%d is %d",x,n,result);
}
