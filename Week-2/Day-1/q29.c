// program to print half pyramid pattern

#include <stdio.h>
int main()
{
    int n,i,j;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++) // to print one line
        {
            printf("*\t");  // to print *
        }
        
        printf("\n"); //to change line
    }

    return 0;
}