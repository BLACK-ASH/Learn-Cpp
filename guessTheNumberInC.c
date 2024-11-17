#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;
    int guessNumber;

    do
    {
        printf("Guess The Number Between 0 - 100 : ");
        scanf("%d", &guessNumber);

        if (guessNumber == randomNumber)
        {
            printf("You Guess The Number Right, Congrats You Won The Game!!!\n");
        }
        else if (randomNumber > guessNumber && guessNumber > (randomNumber - 10))
        {
            printf("You Are To Close,Try A Larger Number!\n");
        }
        else if (randomNumber < guessNumber && guessNumber < (randomNumber + 10))
        {
            printf("You Are To Close,Try A Smaller Number!\n");
        }
        else if (guessNumber != randomNumber)
        {
            printf("Wrong Guess!\n");
        }
        else
        {
            printf("Invalid Input\n");
        }

    } while (randomNumber != guessNumber);

    return 0;
}