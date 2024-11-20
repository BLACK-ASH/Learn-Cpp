#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter A Number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }

        for (int k = i; k <= num; k++)
        {
            cout << " *";
        }
        for (int l = i; l < num; l++)
        {
            cout << " *";
        }

        cout << endl;
    }
    return 0;
}
