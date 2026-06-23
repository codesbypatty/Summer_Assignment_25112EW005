// program to Write function for palindrome
#include<stdio.h>

int palindrome(int n)
{
    int rev=0, rem, temp;

    temp=n;

    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(temp==rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void main()
{
    int n;

    printf("enter the number : ");
    scanf("%d",&n);

    if(palindrome(n))
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }
}