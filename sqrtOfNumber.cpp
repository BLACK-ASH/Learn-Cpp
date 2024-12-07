#include <iostream>

using namespace std;

int main()
{
    int num, ans, mid;
    cout << "-----------------------------------------" << endl;

    cout << "Enter A Root Number : ";
    cin >> num;

    int start = 0;
    int end = num;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == num / mid) // mid*mid = num or mid = num/mid is same mathematicaly
        {
            ans = mid;
            break;
        }
        else if (mid < num / mid)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "The Closet Root Of The Number : " << ans;
    return 0;
}