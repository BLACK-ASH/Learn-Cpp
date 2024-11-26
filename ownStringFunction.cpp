#include <iostream>

using namespace std;

class String
{
public:
    string Value;

    // Constructor
    String(string value)
    {
        Value = value;
    }

    // To Upper Case
    void toUppercase()
    {
        for (int i = 0; i < Value.length(); i++)
        {
            if (Value[i] <= 'z' && Value[i] >= 'a')
            {
                Value[i] = Value[i] - 'a' + 'A';
            }
            continue;
        }
    }
    // To Lower Case
    void toLowercase()
    {
        for (int i = 0; i < Value.length(); i++)
        {
            if (Value[i] <= 'Z' && Value[i] >= 'A')
            {
                Value[i] = Value[i] - 'A' + 'a';
            }
            continue;
        }
    }

    // To Title Case
    void toTitlecase()
    {
        toLowercase();
        Value[0] = Value[0] - 'a' + 'A';
    }

    // To Swap Case
    void toSwapcase()
    {
        for (int i = 0; i < Value.length(); i++)
        {
            if (Value[i] <= 'z' && Value[i] >= 'a')
            {
                Value[i] = Value[i] - 'a' + 'A';
            }
            else if (Value[i] <= 'Z' && Value[i] >= 'A')
            {
                Value[i] = Value[i] - 'A' + 'a';
            }
            else{
                continue;
            }
        }
    }
};

int main()
{
    String name = String("AsHif");
    cout << name.Value << endl;

    name.toUppercase();
    cout << name.Value << endl;

    name.toLowercase();
    cout << name.Value << endl;

    name.toTitlecase();
    cout << name.Value << endl;

    name.toSwapcase();
    cout << name.Value << endl;

    return 0;
}