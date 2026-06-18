// program to print repeated number triangle paattern

#include <stdio.h>
int main()
{
    int n,i,j;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++) // to print one line
        {
            printf("%d\t",i);  // to print number
        }
        
        printf("\n"); //to change line
    }

    return 0;
}