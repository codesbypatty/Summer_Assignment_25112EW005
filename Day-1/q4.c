//program to count digits of a number
#include <stdio.h>
void main()
{
    int N,count=0,N1;
    printf("enter the number N");
    scanf("%d",&N);
    N1=N;
    while(N!=0)
    {
        N=N/10;
        count++;
    }
    if(N1==0)
    {
        count=1;
    }
    printf("number of digits in %d is %d",N1,count);
}