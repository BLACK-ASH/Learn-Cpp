#include <iostream>

int main()
{
    // Declaring Variable
    double temp;
    char unit;

    // Taking User Input
    std::cout << "Enter The Temperature In 'c : ";
    std::cin >> temp;
    std::cout << "Enter The Unit You Want To Convert (Kelvin : k,Fahrenheit :f) : ";
    std::cin >> unit;

    // Giving The OutPut To The User

    if (unit == 'k')
    {
        std::cout << temp + 273.13 << " kelvin";
    }
    else if (unit == 'f')
    {
        std::cout << (temp * 9 / 5 ) + 32 << " fahrenheit";
    }
    else
    {
        std::cout << "Enter A Valid Unit (Kelvin : k,Fahrenheit :f)";
    }

    return 0;
}