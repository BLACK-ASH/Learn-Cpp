#include <iostream>
using namespace std;

int computerMove()
{
    srand(time(0));
    return rand() % 3;
}

int main()
{
    string guess[] = {"Rock", "Paper", "Scissor"};
    int playerMove;
    char isContinue = 'y';

    do
    {
        cout << "_________________________________________" << endl;
        cout << "__________________Start__________________" << endl;
        cout << "Rock, Paper, Scissor" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissor" << endl;

        cout << "Enter Your Choice (1-3): ";
        cin >> playerMove;

        // Validate playerMove input
        if (playerMove < 1 || playerMove > 3)
        {
            cout << "Invalid Input. Please enter a number between 1 and 3." << endl;
            continue; // Skip to the next loop iteration
        }

        // Store the computer's move to ensure consistency
        int compMove = computerMove();
        cout << "Computer Choice: " << guess[compMove] << ", Your Choice: " << guess[playerMove - 1] << endl;

        if (guess[playerMove - 1] == guess[compMove])
        {
            cout << "It's a Tie!" << endl;
        }
        else
        {
            switch (playerMove - 1)
            {
            case 0: // Rock
                if (guess[compMove] == "Paper")
                {
                    cout << "You Lost!" << endl;
                }
                else
                {
                    cout << "You Won!" << endl;
                }
                break;
            case 1: // Paper
                if (guess[compMove] == "Scissor")
                {
                    cout << "You Lost!" << endl;
                }
                else
                {
                    cout << "You Won!" << endl;
                }
                break;
            case 2: // Scissor
                if (guess[compMove] == "Rock")
                {
                    cout << "You Lost!" << endl;
                }
                else
                {
                    cout << "You Won!" << endl;
                }
                break;
            }
        }
        cout << "_________________________________________" << endl;
        cout << "___________________END___________________" << endl;

        cout << "Do you want to continue (y/n)? ";
        cin >> isContinue;
        isContinue = tolower(isContinue);

    } while (isContinue == 'y');

    return 0;
}
