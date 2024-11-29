#include <iostream>

using namespace std;

int main()
{

    int arr[] = {1, 3, 5, 4,5,67,8,9,90,74, 21, 39, 56, 92, 43, 57, 34};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Printing Array Before Sorting
    cout << "Before Sort" << endl;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Selection Sort
    for (int i = 0; i < length - 1; i++)
    {
        int index = i;

        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }

        swap(arr[i], arr[index]);
    }

    // Printing Array After Sorting
    cout << "After Sort" << endl;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}