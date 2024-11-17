#include <iostream>

int main()
{
    int end;

    std::cout << "Enter The Number Of Star : ";
    std::cin >> end;

    for (int i = 1; i < end; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "* ";
        };
        std::cout << "\n";
    };

    return 0;
}