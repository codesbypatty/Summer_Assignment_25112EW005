// program to find maximum of two numbers

#include <stdio.h>

int max(int a,int b)
{
    if(a>b)
    return a;
    else return b;
}

int main()
{
    int a,b;

    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);

    printf(" %d is maximum",max(a,b));

    return 0;
}