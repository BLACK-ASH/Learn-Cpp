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
    int temp;

    for (int i = 0; size - 1; i++)
    {
        while (arr[i] < arr[i + 1])
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}