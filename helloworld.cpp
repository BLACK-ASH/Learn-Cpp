#include <iostream>
int main()
{
    // First Program
    std::cout << "Hello,World!" << "\n";

    // Variable
    // Integer value
    int num = 21;
    std::cout << num << "\n";

    // Decimal Value
    double decimal = 12.21;
    std::cout << decimal << "\n";

    // Char Value
    char character = 'A';
    std::cout << character << "\n";

    // Boolean Value
    bool boolean = true;
    std::cout << boolean << "\n";

    // String Value
    std::string name = "Ashif Shaikh";
    std::cout << name << "\n";

    // Test
    std::cout << num + decimal << "\n";
    std::cout << "I Am " + name << "\n";

    // Taking Input
    std::string fullName;
    int age;

    std::cout << "Enter Your Name : ";
    std::getline(std::cin >> std::ws, fullName);
    std::cout << "Enter Your Age : ";
    std::cin >> age;

    std::cout << "Hello , " << fullName << "\n";
    std::cout << " You Are " << age << " Old !";
    return 0;
}