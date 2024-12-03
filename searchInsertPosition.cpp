#include <iostream>

using namespace std;

int searchInsertPosition(int arr[], int size, int key);

int main()
{

    // Creating Array From User Input
    int arr[100];

    cout << "Enter The Number Of Element Limit(1-100)" << endl;

    // Taking Input
    int size;
    cout << "Enter The Size Of Array : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Element In Position " << i << " : ";
        cin >> arr[i];
    }

    // Search Element Input
    int key;
    cout << "Enter The Number You Want To Search In Array : ";
    cin >> key;

    // Using Binary Search
    cout << "Element Found At Index : " << searchInsertPosition(arr, size, key);

    return 0;
}

// Binary Search
int searchInsertPosition(int arr[], int size, int key)
{
    int index = size, startPoint, endPoint, midPoint;

    // Intial Values
    startPoint = 0;
    endPoint = size - 1;

    while (startPoint <= endPoint)
    {
        // Better Apporoach For MidPoint - (Error Proof)
        // It Prevent Integer Overflow
        midPoint = startPoint+(endPoint-startPoint)/2;
        
        if (arr[midPoint] == key)
        {
            return midPoint;
        }
        else if (arr[midPoint] < key)
        {
            startPoint = midPoint + 1;
        }
        else
        {
            index = midPoint;
            endPoint = midPoint - 1;
        }
    }

    return index;
}