// program to create marksheet generation system

#include<stdio.h>

int main()
{
    char name[50];
    int roll;
    int m1,m2,m3,m4,m5;
    int total;
    float percentage;

    printf("enter student name : ");
    scanf("%s",name);

    printf("enter roll number : ");
    scanf("%d",&roll);

    printf("enter marks of 5 subjects : ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

    total=m1+m2+m3+m4+m5;
    percentage=total/5.0;

    printf("\n------ MARKSHEET ------\n");
    printf("Name : %s\n",name);
    printf("Roll Number : %d\n",roll);
    printf("Total Marks : %d\n",total);
    printf("Percentage : %.2f\n",percentage);

    if(percentage>=90)
    {
        printf("Grade : A+\n");
    }
    else if(percentage>=75)
    {
        printf("Grade : A\n");
    }
    else if(percentage>=60)
    {
        printf("Grade : B\n");
    }
    else if(percentage>=40)
    {
        printf("Grade : C\n");
    }
    else
    {
        printf("Grade : F\n");
    }

    return 0;
}