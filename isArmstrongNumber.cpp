#include <iostream>
#include <cmath>

using namespace std;

int countDigit(int num);
int getArmstrongNumber(int num, int count);

int main()
{
    int num, count, armstrongNumber;

    cout << "Enter A Number Verify Armstrong Number : ";
    cin >> num;

    count = countDigit(num);
    armstrongNumber = getArmstrongNumber(num, count);

    // For Checking And Debuging
    cout << "The Count OF The Number Is : " << count << endl;
    cout << "The Armstrong Number is Number Is : " << armstrongNumber << endl;

    num == armstrongNumber                             // Condition
        ? cout << "The Given Number Is Armstrong"      // If True
        : cout << "The Given Number Is Not Armstrong"; // If False

    return 0;
}

// To Get The Count Of Digit In Number
int countDigit(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}

// To Get Armstrong Number Of Given Number
int getArmstrongNumber(int num, int count)
{
    int armstrongNumber = 0;
    while (num)
    {
        armstrongNumber += pow((num % 10), count);
        num /= 10;
    }

    return armstrongNumber;
}