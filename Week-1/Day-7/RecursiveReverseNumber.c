// program to find reverse of a number using recursion

#include <stdio.h>

//global variable declaration
int rev=0;

int reverse(int n)
{
    //base condition
    if(n==0)
    return rev;

    //to build reverse number
    rev=rev*10+n%10;

    //recursion
    return reverse(n/10);
}

int main()
{

    int n;

    printf("Enter the number");
    scanf("%d",&n);

    printf("%d", reverse(n));

    return 0;
}