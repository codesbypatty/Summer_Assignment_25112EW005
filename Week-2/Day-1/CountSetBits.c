//program to count set bits in a number

#include <stdio.h>
int main()
{
    int n2,n,i=0;

    //input
    printf("enter a number in decimal");
    scanf("%d",&n);
    n2=n;

    while(n>0)   //loop to divide and convert to binary
    {
        if(n%2==1)  //checks if binary value at that place is 1
        i++;        //counts
        n=n/2;   
    }

    printf("number of set bits in binary of %d is %d",n2,i);
    
    return 0;
}
