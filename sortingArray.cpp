#include <iostream>

void sort(int arr[], int size);
int main()
{
    // Creating An Unsorted Array
    int numArr[] = {1, 3, 532, 5, 3, 673, 0, 53, 3};
    int size = sizeof(numArr) / sizeof(numArr[0]);

    // Printing The Array
    std::cout << "Array Before Sort" << "\n";
    for (int num : numArr)
    {
        std::cout << num << " ";
    }
    // Sorting The Array
    sort(numArr, size);

    // Printing The Array After Sorting
    std::cout << "Array After Sort" << "\n";
    for (int num : numArr)
    {
        std::cout << num << " ";
    }
    
    return 0;
}

void sort(int arr[], int size)
{
    // Sorting Array Using Bubblesort
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}