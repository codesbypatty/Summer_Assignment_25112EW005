//program to find nth fibonacci term
#include <stdio.h>
void main()
{
    int a,b,c,n,i;
    printf("enter the value of n\t");
    scanf("%d",&n);
    a=0;
    b=1;
    i=3;
    //to make the series and find the nth term

        //to check first 2 terms
        if(n==1)
        printf("%d\t",a);
        if(n==2)
        printf("%d\t",b);
        //to check next n-2 terms
        while(i<=n)
        {
         c=a+b;
         if(i==n)
         printf("%d\t",c);
         a=b;
         b=c;
         i++;
        }
}