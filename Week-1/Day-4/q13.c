//program to generate fibonacci series
#include <stdio.h>
void main()
{
    int a,b,c,n,i;
    printf("enter the number of terms");
    scanf("%d",&n);
    a=0;
    b=1;
    i=1;
    //to check if terms are even needed to print
    if(n>0)
    {
        //to print first 2 terms
        printf("%d\t",a);
        printf("%d\t",b);
        //to print n-2 terms because 1 term is already printed
        while(i<=n-2)
        {
         c=a+b;
         printf("%d\t",c);
         a=b;
         b=c;
         i++;
        }
    }
}