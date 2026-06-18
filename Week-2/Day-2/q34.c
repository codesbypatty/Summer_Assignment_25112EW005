// program to Print reverse number triangle

#include <stdio.h>
int main()
{
    int n,i,j;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++) // to print one line
        {
            printf("%d\t",j);  // to print number
        }
        
        printf("\n"); //to change line
    }
    
    return 0;
}