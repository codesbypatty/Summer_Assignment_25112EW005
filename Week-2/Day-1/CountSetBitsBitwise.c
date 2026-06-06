//count set bits using bitwise
#include <stdio.h>

int main()
{
    int i=0,n,n2;

    printf("enter the number");
    scanf("%d",&n);

    n2=n;

    while(n>0)
    {
        i += n&1;  //bitwise & checks if the last binary digit of n is 1 and adds 1 if true
        n>>=1;     //bitwise right shift removes the rightmost digit
    }

    printf("Number of set bits in %d is %d",n2,i);
}
