// program to create student record system using arrays and strings

#include<stdio.h>

int main()
{
    int roll[10],marks[10];
    char name[10][50];
    int n,i;

    printf("enter number of students : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nstudent %d\n",i+1);

        printf("enter roll number : ");
        scanf("%d",&roll[i]);

        printf("enter name : ");
        scanf("%s",name[i]);

        printf("enter marks : ");
        scanf("%d",&marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll Number : %d\n",roll[i]);
        printf("Name : %s\n",name[i]);
        printf("Marks : %d\n",marks[i]);
    }

    return 0;
}