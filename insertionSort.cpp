#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1,0, 3, 5, 4, 5, 67, 8, 9, 90, 74, 21, 39, 56, 92, 43, 57, 34};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Printing Array Before Sorting
    cout << "Before Sort" << endl;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Insertion Sort
    for (int i = 1; i <= length; i++)
    {
        for (int j = i ; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    // Printing Array After Sorting
    cout << "After Sort" << endl;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}