#include <iostream>
#include <cmath>
int main()
{
    // Declaring Variable
    double a;
    double b;
    double c;

    // Taking User Input
    std::cout << "Enter The Value Of A : ";
    std::cin >> a;
    std::cout << "Enter The Value Of B : ";
    std::cin >> b;

    // Calculating The Value Of Hypotenus
    c = sqrt(pow(a, 2) + pow(b, 2));

    // Giving The Output
    std::cout << c << " Is The Hypotenus Of " << a << ',' << b;

    return 0;
}