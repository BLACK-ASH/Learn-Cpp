#include <iostream>

int main()
{

    int numArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int num : numArray)
    {
        std::cout << num << "\n";
    }

    std::string nameArray[] = {"Ashif", "Azim", "Subhana", "Rupsona", "Ahammed"};
    int sizeNA = sizeof(nameArray) / sizeof(nameArray[0]);

    for (int i = 0; i < sizeNA; i++)
    {
        std::cout << nameArray[i] << "<--reverse-->" << nameArray[sizeNA - 1 - i] << "\n";
    }

    return 0;
}