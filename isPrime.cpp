#include <iostream>
#include <cmath>

// To Check The Number Is Prime Or Not
bool isPrime(int num)
{
    int sqrtNum = sqrt(num);

    if (num <= 1)
    {
        return false;
    }

    if (num == 2)
    {
        return true;
    }

    if (num % 2 == 0)
    {
        return false;
    };

    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        };
    }

    return true;
};

int main()
{
    int num;
    std::cout << "Enter A Number : ";
    std::cin >> num;

    if (isPrime(num))
    {
        std::cout << "The Number " << num << " Is Prime." << '\n';
    }
    else
    {
        std::cout << "The Number " << num << " Is Not Prime." << '\n';
    };

    int range;
    std::cout << "Enter A Range : ";
    std::cin >> range;

    std::cout << "The Prime Number In The Range Between 1 To " << range << " Is : " << '\n';
    for (int i = 0; i < range; i++)
    {
        if (isPrime(i))
        {
            std::cout << i << " ";
        };
    }

    return 0;
}