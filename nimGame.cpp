#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Nim Game Winner Checker " << endl;
    cout << "Enter A Number : ";

    cin >> num;

    string status = num % 4 == 0 ? "Lose" : "Win";

    cout << "You Will " << status << " The Game." << endl;
}