#include <iostream>

using namespace std;

char toCapatilize(char character);
int main()
{
    char character;
    cout << "Enter A Character To Capitalize : ";
    cin >> character;

    cout << toCapatilize(character) << endl;

    return 0;
}
char toCapatilize(char character)
{
    return character - 'a' + 'A';
}