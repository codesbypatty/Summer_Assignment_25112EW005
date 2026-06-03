//program to calculate sum of first N natural numbers
#include <stdio.h>
void main()
{
    int i,N,sum=0;
    printf("Enter the limit N");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+i;
    }
    
    printf("the sum of first %d natural numbers = %d",N,sum);
}