// program to create contact management system

#include<stdio.h>

int main()
{
    char name[50];
    char address[100];
    long long mobile;

    printf("enter name : ");
    scanf("%s",name);

    printf("enter address : ");
    scanf("%s",address);

    printf("enter mobile number : ");
    scanf("%lld",&mobile);

    printf("\n----- Contact Details -----\n");
    printf("Name : %s\n",name);
    printf("Address : %s\n",address);
    printf("Mobile Number : %lld\n",mobile);

    return 0;
}