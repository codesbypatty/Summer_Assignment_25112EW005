// program to create menu driven calculator

#include<stdio.h>

int main()
{
    int choice;
    float a,b;

    printf("enter two numbers : ");
    scanf("%f%f",&a,&b);

    while(1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("sum = %.2f\n",a+b);
                break;

            case 2:
                printf("difference = %.2f\n",a-b);
                break;

            case 3:
                printf("product = %.2f\n",a*b);
                break;

            case 4:
                if(b!=0)
                {
                    printf("quotient = %.2f\n",a/b);
                }
                else
                {
                    printf("division by zero not possible\n");
                }
                break;

            case 5:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
}