#include <iostream>

using namespace std;

int *firstAndLastOccurance(int arr[], int size, int target);

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

    // Using firstAndLastOccurance
    int *p = firstAndLastOccurance(arr, size, key);
    cout << "Element Found At Index : " << p[0] << "," << p[1];

    // Free allocated memory
    delete[] p;

    return 0;
}
int *firstAndLastOccurance(int arr[], int size, int target)
{
    // Initial Value
    int first = -1, last = -1;

    int startPoint, endPoint, midPoint;

    startPoint = 0;
    endPoint = size - 1;

    // For First Occurance
    while (startPoint <= endPoint)
    {
        midPoint = (startPoint + endPoint) / 2;

        if (arr[midPoint] == target)
        {
            first = midPoint;
            endPoint = midPoint - 1;
        }
        else if (arr[midPoint] < target)
        {
            startPoint = midPoint + 1;
        }
        else
        {
            endPoint = midPoint - 1;
        }
    }
    // Reseting For Binary Search
    startPoint = 0;
    endPoint = size - 1;

    // For Last Occurance
    while (startPoint <= endPoint)
    {
        midPoint = (startPoint + endPoint) / 2;

        if (arr[midPoint] == target)
        {
            last = midPoint;
            startPoint = midPoint + 1;
        }
        else if (arr[midPoint] < target)
        {
            startPoint = midPoint + 1;
        }
        else
        {
            endPoint = midPoint - 1;
        }
    }

    // Dynamically allocate memory for the result
    int *position = new int[2];
    position[0] = first;
    position[1] = last;

    return position;
}