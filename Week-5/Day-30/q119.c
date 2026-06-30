// program to create mini employee management system

#include<stdio.h>

int main()
{
    int id;
    char name[50];
    float salary;
    int choice;

    while(1)
    {
        printf("\n----- EMPLOYEE MENU -----\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Exit\n");

        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("enter employee id : ");
                scanf("%d",&id);

                printf("enter employee name : ");
                scanf("%s",name);

                printf("enter salary : ");
                scanf("%f",&salary);

                printf("employee added successfully\n");
                break;

            case 2:
                printf("\nEmployee ID : %d\n",id);
                printf("Employee Name : %s\n",name);
                printf("Salary : %.2f\n",salary);
                break;

            case 3:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
}