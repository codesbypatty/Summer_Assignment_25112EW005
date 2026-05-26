//program to print multiplication table of a given number
#include <stdio.h>
void main()
{
    int i,N;
    printf("enter the number N");
    scanf("%d",&N);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",N,i,N*i);
    }
}