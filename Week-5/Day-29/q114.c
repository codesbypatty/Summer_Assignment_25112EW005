// program to create menu driven array operations system

#include<stdio.h>

int main()
{
    int a[100],n,i,choice,sum=0;

    printf("enter size of array : ");
    scanf("%d",&n);

    printf("enter array elements : \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    while(1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Largest Element\n");
        printf("4. Exit\n");

        printf("enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("array elements : ");

                for(i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }

                printf("\n");
                break;

            case 2:
                sum=0;

                for(i=0;i<n;i++)
                {
                    sum=sum+a[i];
                }

                printf("sum = %d\n",sum);
                break;

            case 3:
            {
                int largest=a[0];

                for(i=1;i<n;i++)
                {
                    if(a[i]>largest)
                    {
                        largest=a[i];
                    }
                }

                printf("largest element = %d\n",largest);
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