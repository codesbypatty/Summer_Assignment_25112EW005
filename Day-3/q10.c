//program to print prime numbers in a range
#include <stdio.h>
void main()
{
    int a,b,i,j,c;
    printf("starting range");
    scanf("%d",&a);
    printf("enter end point");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                c=1;
            }
        }
        if((c==0)&&(i!=1)&&(i!=0))
            printf("%d\t",i);
    }
}