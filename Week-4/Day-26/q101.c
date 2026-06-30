// program to create number guessing game

#include<stdio.h>

void main()
{
    int number=45;
    int guess;

    printf("Guess the number between 1 to 100\n");

    while(1)
    {
        printf("enter your guess : ");
        scanf("%d",&guess);

        if(guess>number)
        {
            printf("too high\n");
        }
        else if(guess<number)
        {
            printf("too low\n");
        }
        else
        {
            printf("correct guess\n");
            break;
        }
    }
}