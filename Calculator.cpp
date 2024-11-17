#include <iostream>
#include <cmath>
int main()
{
    // Declaring Variable
    double a;
    double b;
    char c;

    // Taking User Input
    std::cout << "Enter The Value Of A : ";
    std::cin >> a;
    std::cout << "Enter The Operator ( + , - , * , / ) : ";
    std::cin >> c;
    std::cout << "Enter The Value Of B : ";
    std::cin >> b;

    // Giving The Output
    switch (c)
    {
    case '+':
        std::cout << a+b ;
        break;
    case '-':
        std::cout << a-b ;
        break;
    case '*':
        std::cout << a*b ;
        break;
    case '/':
        std::cout << a/b ;
        break;
    default:
    std::cout << "Please Enter A Valid Operation ( + , - , * , / )";
        break;
    }

    return 0;
};