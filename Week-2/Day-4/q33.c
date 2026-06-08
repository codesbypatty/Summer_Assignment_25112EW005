// program to Print reverse star pattern.

#include <stdio.h>
int main()
{
    int n,i,j;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--) // to print one line
        {
            printf("*\t");  // to print number
        }
        
        printf("\n"); //to change line
    }

    return 0;
}