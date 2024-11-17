#include <iostream>

int main()
{
    srand(time(0));

    int randomNumber = rand() % 10 + 1;
    int guessNumber;

    do
    {
        std::cout << "Guess The Number Between 1-10 : ";
        std::cin >> guessNumber;
        if (randomNumber == guessNumber)
        {
            std::cout << "Congragulation You Have Won !";
        }
        else
        {
            std::cout << "You Have Guess The Number Wrong" << "\n";
        }
    } while (randomNumber != guessNumber);
    
    return 0;
}