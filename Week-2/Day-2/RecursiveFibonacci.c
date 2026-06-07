//program to print fibonacci series using recursion
#include <stdio.h>

int fibonacci(int n)
{
    if(n==0)    //base condition
    return 0;
    if(n==1)
    return 1;

    return fibonacci(n-1)+fibonacci(n-2);  //to return the value of nth term
}

int main()
{
    int n,i;
    printf("enter the number of terms");
    scanf("%d",&n);

    //loop to find terms for 1 to n and print them

    for(i=0;i<n;i++)
    {
        printf("%d\t",fibonacci(i));
    }

    return 0;
}