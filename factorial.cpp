#include <iostream>

int main()
{
    int num;
    std::cout << "********** FACTORIAL **********" << "\n";
    std::cout << "Enter A Number : ";

    std::cin >> num;
    int ans = 1;

    for (int i = 1; i <= num; i++)
    {
        ans *= i;
    }

    std::cout << ans << "\n";
    std::cout << "*********** THE END ***********" << "\n";

    return 0;
}