// program to create ticket booking system

#include<stdio.h>

int main()
{
    char name[50];
    int tickets;
    float price,total;

    printf("enter customer name : ");
    scanf("%s",name);

    printf("enter number of tickets : ");
    scanf("%d",&tickets);

    printf("enter ticket price : ");
    scanf("%f",&price);

    total=tickets*price;

    printf("\n----- Ticket Details -----\n");
    printf("Customer Name : %s\n",name);
    printf("Tickets : %d\n",tickets);
    printf("Total Amount : %.2f\n",total);

    return 0;
}