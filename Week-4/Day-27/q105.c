// program to create student record management system

#include<stdio.h>

int main()
{
    int roll;
    char name[50];
    float marks;

    printf("enter roll number : ");
    scanf("%d",&roll);

    printf("enter student name : ");
    scanf("%s",name);

    printf("enter marks : ");
    scanf("%f",&marks);

    printf("\n----- Student Record -----\n");
    printf("Roll Number : %d\n",roll);
    printf("Name : %s\n",name);
    printf("Marks : %.2f\n",marks);

    return 0;
}