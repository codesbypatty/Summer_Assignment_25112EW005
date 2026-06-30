// program to create ATM simulation

#include<stdio.h>

void main()
{
    int choice;
    int balance=10000;
    int amount;

    while(1)
    {
        printf("\nATM MENU\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("current balance = %d\n",balance);
                break;

            case 2:
                printf("enter amount : ");
                scanf("%d",&amount);

                balance=balance+amount;

                printf("updated balance = %d\n",balance);
                break;

            case 3:
                printf("enter amount : ");
                scanf("%d",&amount);

                if(amount<=balance)
                {
                    balance=balance-amount;
                    printf("updated balance = %d\n",balance);
                }
                else
                {
                    printf("insufficient balance\n");
                }

                break;

            case 4:
                printf("thank you");
                return;

            default:
                printf("invalid choice\n");
        }
    }
}