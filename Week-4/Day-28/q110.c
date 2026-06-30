// program to create bank account system

#include<stdio.h>

int main()
{
    int choice;
    char name[50];
    int account;
    float balance=0,amount;

    printf("enter account holder name : ");
    scanf("%s",name);

    printf("enter account number : ");
    scanf("%d",&account);

    while(1)
    {
        printf("\n----- BANK MENU -----\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("enter amount : ");
                scanf("%f",&amount);

                balance=balance+amount;

                printf("balance = %.2f\n",balance);
                break;

            case 2:
                printf("enter amount : ");
                scanf("%f",&amount);

                if(amount<=balance)
                {
                    balance=balance-amount;
                    printf("balance = %.2f\n",balance);
                }
                else
                {
                    printf("insufficient balance\n");
                }

                break;

            case 3:
                printf("current balance = %.2f\n",balance);
                break;

            case 4:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
}