// program to create inventory management system

#include<stdio.h>

int main()
{
    int id,quantity;
    char item[50];
    float price,total;

    printf("enter item id : ");
    scanf("%d",&id);

    printf("enter item name : ");
    scanf("%s",item);

    printf("enter quantity : ");
    scanf("%d",&quantity);

    printf("enter price per item : ");
    scanf("%f",&price);

    total=quantity*price;

    printf("\n----- Inventory Details -----\n");
    printf("Item ID : %d\n",id);
    printf("Item Name : %s\n",item);
    printf("Quantity : %d\n",quantity);
    printf("Price : %.2f\n",price);
    printf("Total Value : %.2f\n",total);

    return 0;
}