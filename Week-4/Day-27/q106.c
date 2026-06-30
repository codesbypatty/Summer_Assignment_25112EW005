// program to create employee management system

#include<stdio.h>

int main()
{
    int id;
    char name[50];
    float salary;

    printf("enter employee id : ");
    scanf("%d",&id);

    printf("enter employee name : ");
    scanf("%s",name);

    printf("enter salary : ");
    scanf("%f",&salary);

    printf("\n----- Employee Details -----\n");
    printf("Employee ID : %d\n",id);
    printf("Employee Name : %s\n",name);
    printf("Salary : %.2f\n",salary);

    return 0;
}