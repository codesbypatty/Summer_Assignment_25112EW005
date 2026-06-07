//program to find factorial using recursion
#include <stdio.h>

int fact(int a)
{
    if((a==0)||(a==1))
    return 1;

    return a*fact(a-1);
}

int main()
{
    int n;

    printf("enter the number");
    scanf("%d",&n);

    printf("factorial of %d is %d",n,fact(n));
    
    return 0;
}