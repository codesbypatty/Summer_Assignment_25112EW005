// program to create menu driven string operations system

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int choice;

    printf("enter string : ");
    scanf("%s",str);

    while(1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Display String\n");
        printf("2. String Length\n");
        printf("3. Reverse String\n");
        printf("4. Exit\n");

        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("%s\n",str);
                break;

            case 2:
                printf("length = %d\n",strlen(str));
                break;

            case 3:
            {
                int i;

                printf("reversed string : ");

                for(i=strlen(str)-1;i>=0;i--)
                {
                    printf("%c",str[i]);
                }

                printf("\n");
                break;
            }

            case 4:
                printf("thank you\n");
                return 0;

            default:
                printf("invalid choice\n");
        }
    }
}