#include <iostream>
using namespace std;

int main()
{
    int num;
    char pattern;

    cout << "Enter A Number : ";
    cin >> num;


    for (int i = 1; i <= num; i++)
    {
        // For Printing Space
        for (int j = 1; j <= num - i; j++)
        {
            cout << "  ";
        }

        // For Printing Star
        for (int k = 0; k < i; k++)
        {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}