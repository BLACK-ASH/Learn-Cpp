#include <iostream>
using namespace std;
int main()
{
    unsigned long long int currentNum, nextNum, temp;
    int endPoint;

    cout << "------------Fibonnaci------------" << endl;

    currentNum = 0;
    nextNum = 1;

    cout << "Enter A End Point : ";
    cin >> endPoint;

    while (endPoint < 0)
    {
        cout << "Sequence Not Possible." << endl;
        cout << "End Point Must Be Positive : ";
        cin >> endPoint;
    }

    cout << "--------------START--------------" << endl;
    for (int i = 0; i <= endPoint; i++)
    {
        cout << currentNum << endl;

        temp = currentNum;
        currentNum = nextNum;
        nextNum += temp;
    }

    cout << "---------------END---------------" << endl;
    return 0;
}