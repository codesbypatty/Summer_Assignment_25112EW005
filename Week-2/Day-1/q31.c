// program to print character triangle

#include <stdio.h>
int main()
{
    int n,i,j;

    printf("enter the number of lines\n");
    scanf("%d",&n);

    for(i='A';i<'A'+n;i++)
    {
        for(j='A';j<=i;j++) // to print one line
        {
            printf("%c\t",j);  // to print character
        }
        
        printf("\n"); //to change line
    }

    return 0;
}