#include <iostream>
using namespace std;

int main()
{
    long long int num, ans = 0;
    cout << "Enter A Number : ";

    cin >> num;

    while (0 != num)
    {
        int remainder = num % 10;
        ans = (ans * 10) + remainder;
        num /= 10;
    }

    cout << "The Reverse Number Is : " << ans;
    return 0;
}