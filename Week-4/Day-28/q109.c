// program to create library management system

#include<stdio.h>

int main()
{
    int bookid;
    char title[50];
    char author[50];

    printf("enter book id : ");
    scanf("%d",&bookid);

    printf("enter book title : ");
    scanf("%s",title);

    printf("enter author name : ");
    scanf("%s",author);

    printf("\n----- Library Record -----\n");
    printf("Book ID : %d\n",bookid);
    printf("Book Title : %s\n",title);
    printf("Author : %s\n",author);

    return 0;
}