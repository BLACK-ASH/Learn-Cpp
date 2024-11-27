#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter A Number To Get Traling Zero : ";
    cin >> num;

    while (num >= 5)
    {
        count += num / 5;
        num /= 5;
    }

    cout << "The Traling Zero In The Number " << num << " Is " << count << endl;

    return 0;
}