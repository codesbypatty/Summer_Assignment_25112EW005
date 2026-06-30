// program to create quiz application

#include<stdio.h>

void main()
{
    int answer;
    int score=0;

    printf("Question 1\n");
    printf("Capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");

    scanf("%d",&answer);

    if(answer==2)
    {
        score++;
    }

    printf("\nQuestion 2\n");
    printf("5 + 7 = ?\n");
    printf("1. 10\n");
    printf("2. 11\n");
    printf("3. 12\n");
    printf("4. 13\n");

    scanf("%d",&answer);

    if(answer==3)
    {
        score++;
    }

    printf("\nQuestion 3\n");
    printf("C language was developed by?\n");
    printf("1. Dennis Ritchie\n");
    printf("2. James Gosling\n");
    printf("3. Bjarne Stroustrup\n");
    printf("4. Guido van Rossum\n");

    scanf("%d",&answer);

    if(answer==1)
    {
        score++;
    }

    printf("\nYour score = %d out of 3\n",score);
}