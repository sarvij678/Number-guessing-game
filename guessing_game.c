#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 int guess,random;
int number_of_guess = 0;
srand(time(NULL));



    printf("Welcome to the number guessing game .\n");
    random = rand() % 100 + 1;   // generating between 0 to 100

    do
    {
        printf("please enter your guess between number (1 to 100):\n");
        scanf("%d" , &guess);
        number_of_guess++;

        if (guess < random)
        {
            printf("Guess a larger number.\n");
        }
        else if (guess > random)
        {
            printf("Guess a smaller number.\n");
        }
        else
        {
            printf("Congratulations!! You have successfully guessed the number in %d attempts\n", number_of_guess);
        }
    } while (guess != random);
    
printf("Thanks!! for playing number guesssing.");
printf("\nDeveloped by Sarvi.");
    return 0;
}