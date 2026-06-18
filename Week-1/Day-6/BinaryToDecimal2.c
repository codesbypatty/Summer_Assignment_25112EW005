//program to convert binary to decimal written in the classic algorithm, i.e. without math library
#include <stdio.h>

int main()
{
    int n,base,s,n1,r;
    printf("enter the number");
    scanf("%d",&n);

    base=1;
    s=0;
    n1=n;

    while(n>0)
    {
        //extracting the last digit and multiplying it with the 2 raised to the position(base)

        r=n%10;
        s=s+r*base;   //using base instead of pow function
        base*=2;
        n=n/10;  //to remove last digit

    }

    printf("%d is represented in decimal as %d",n1,s);

    return 0;
}
