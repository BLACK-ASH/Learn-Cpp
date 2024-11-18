#include <iostream>
using namespace std;

int nthFibonacci(int num);
int main()
{
    int num;
    cout << "------------Fibonnaci------------" << endl;
    cout << "Enter A Number To Get Corresponding Fibonacci Number : ";
    cin >> num;

    cout << "The Number At  " << num << " Is : " << nthFibonacci(num) << endl;
    cout << "---------------------------------" << endl;

    // If User Want A Sequence Of Fibonacci Number
    char isChoice;
    int endpoint;

    cout << "You Want A Fibonacci Sequence (y/n) : ";
    cin >> isChoice;

    // To Convert The Input In Lower Case
    isChoice = (char)tolower(isChoice);

    if (!(('y' == isChoice) || ('n' == isChoice)))
    {
        cout << "Invalid Option" << endl;
        cout << "You Want A Fibonacci Sequence (y/n) : ";
        cin >> isChoice;
    }

    if ('y' == isChoice)
    {
        cout << "Enter A Endpoint : ";
        cin >> endpoint;

        // To Check If The User Give Negative Number
        if (endpoint < 0)
        {
            cout << "Invalid Number " << endl;
            cout << "Enter A Postive Number : ";
            cin >> endpoint;
        }

        cout << "--------------START-------------" << endl;
        for (int i = 0; i < endpoint; i++)
        {
            cout<< i << ". " << nthFibonacci(i) << endl;
        }
        cout << "---------------END--------------" << endl;
    }

    return 0;
};

// This Function Will Give The Fibonacci Number Of The Given Number
int nthFibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }

    return nthFibonacci(num - 1) + nthFibonacci(num - 2);
}
