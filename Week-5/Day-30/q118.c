// program to create mini library system

#include<stdio.h>

int main()
{
    int id;
    char book[50];
    int choice;

    while(1)
    {
        printf("\n----- LIBRARY MENU -----\n");
        printf("1. Add Book\n");
        printf("2. Display Book\n");
        printf("3. Exit\n");

        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("enter book id : ");
                scanf("%d",&id);

                printf("enter book name : ");
                scanf("%s",book);

                printf("book added successfully\n");
                break;

            case 2:
                printf("\nBook ID : %d\n",id);
                printf("Book Name : %s\n",book);
                break;

            case 3:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
}