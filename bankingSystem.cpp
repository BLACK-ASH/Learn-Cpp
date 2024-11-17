#include <iostream>
#include <iomanip>

void showBalance(double balance);
double depositMoney();
double withdrawMoney();
int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "********** BANK START **********" << "\n";
        std::cout << "Enter Your Choice : " << "\n";
        std::cout << "1 : Check Balance " << "\n";
        std::cout << "2 : Deposit Money " << "\n";
        std::cout << "3 : Withdraw Money " << "\n";
        std::cout << "4 : Exit" << "\n";

        std::cin >> choice;

        // For Stoping Buffer
        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += depositMoney();
            showBalance(balance);
            break;
        case 3:
            balance -= withdrawMoney();
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks For Using The Banking App" << "\n";
            break;

        default:
            std::cout << "Invalid Choice" << "\n";
        }
        std::cout << "*********** BANK END ***********" << "\n";
    } while (choice != 4);

    return 0;
};

// For Checking The Balance
void showBalance(double balance)
{
    std::cout << "Your Current Balance Is : " << std::setprecision(2) << std::fixed << balance << "Rs" << "\n";
}
double depositMoney()
{
    double amount;
    std::cout << "Enter The Amount You Want To Deposit : ";
    std::cin >> amount;
    return amount;
}
double withdrawMoney()
{
    double amount;
    std::cout << "Enter The Amount You Want To Withdraw : ";
    std::cin >> amount;
    return amount;
}