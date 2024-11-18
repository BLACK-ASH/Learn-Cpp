#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
    int num;
    cout << "********** FACTORIAL **********" << endl;
    cout << "Enter A Number : ";
    cin >> num;

    while (num < 0)
    {
        cout << "Factorial Not Possible For Given Number " << endl;
        cout << "Enter A Valid Number : ";
        cin >> num;
    };

    cout << "The Factorial Of " << num << " Is : ";
    cout << factorial(num) << endl;
    cout << "*********** THE END ***********" << endl;

    return 0;
}

int factorial(int num)
{
    if (num < 2)
    {
        return 1;
    }

    unsigned long long int ans = 1;
    
    return num * factorial(num - 1);
}