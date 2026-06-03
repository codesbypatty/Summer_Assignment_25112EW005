//program to Print Armstrong numbers in a range
#include <stdio.h>
#include <math.h>
void main()
{
    int n,n1,r,s,c,a,b,i;
    printf("enter the starting range \n");
    scanf("%d",&a);
    printf("enter the ending range \n");
    scanf("%d",&b);

    for(i=a;i<=b;i++)
    {
         s=0;
         c=0;
         n1=i;
         //to count digits
         while(n1>0)
           {
             c++;
             n1=n1/10;
           }

         //to add digits by raising to power of number of digits
         n1=i;
         while(n1>0)
            {
             r=n1%10;
             s=s+pow(r,c);
             n1=n1/10;
            }

         //to check
         if(s==i)
         printf("%d\t",i);
    }
}