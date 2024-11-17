#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// Declaring Function
bool isBinary(string number);
int toDecimal(string number);
string toBinary(int number);

int main()
{
    // Declaring Variable
    string binaryNumber;
    int number,prefernce;
    char isContinue = 'y';

    do
    {

        cout << "----------------------------------" << endl;
        cout << "  DECIMAL <--> BINARY CONVERTER   " << endl;
        cout << "----------------------------------" << endl;

        // Taking User Preference
        cout << "What You Want To Convert " << endl;
        cout << "1. Binary TO Decimal " << endl;
        cout << "2. Decimal TO Binary " << endl;
        cout << "What Is Your Preference : ";
        cin >> prefernce;

        switch (prefernce)
        {
        case 1:
            // Taking Input
            cout << "Enter A Binary Number : ";
            cin >> binaryNumber;

            // Converting To Decimal And Giving Output
            if (isBinary(binaryNumber))
            {
                cout << "The Decimal Of The Given Number Is : " << toDecimal(binaryNumber) << endl;
            }
            else
            {
                cout << "Enter A Valid Binary Number" << endl;
                continue;
            }

            break;
        case 2:
            // Taking Input
            cout << "Enter A Number :";
            cin >> number;

            // Converting To Decimal And Giving Output
            cout << "The Binary Of The Given Number Is : " << toBinary(number) << endl;
            break;
        default:
            cout << "Enter A Valid Prefernece" << endl;
            continue;
            break;
        }

        cout << "----------------END---------------" << endl;

        // Taking User Preference To Continue The Program
        cout << "you want to continue (y/n)? : ";
        cin >> isContinue;
        tolower(isContinue);
        cout << endl;
        cout << endl;

    } while ('y' == isContinue );

    return 0;
}

// To Check The Given Number Is Binary Or Not
bool isBinary(string number)
{
    for (int i = 0; i < number.length(); i++)
    {
        if (!('1' == number[i] || '0' == number[i]))
        {
            return false;
        }
    }
    return true;
}

// To Convert Binary Into Decimal
int toDecimal(string number)
{
    // Reversing The Number
    reverse(number.begin(), number.end());

    // Calculating The Ans
    int ans = 0;
    for (int i = 0; i < number.length(); i++)
    {
        ans += (number[i] - '0') * pow(2, i);
    }
    return ans;
}

// To Convert Decimal Into Binary
string toBinary(int number)
{
    string binary = "";
    for (int i = 0; number > 0; i++)
    {
        binary.append(to_string(number % 2));
        number = floor(number / 2);
    }
    // Reversing The String To Get The Binary Number
    reverse(binary.begin(), binary.end());
    return binary;
}