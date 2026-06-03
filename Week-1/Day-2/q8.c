//program to check whether a number is palindrome
#include <stdio.h>
void main()
{
    int n,n1,rev=0,r;
    printf("enter the number");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(n1==rev)
    printf("palindrome");
    else
    printf("not palindrome");
}