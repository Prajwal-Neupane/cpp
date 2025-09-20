// #include <iostream>

// int main()
// {

//     int numberOfStudents = 0;

//     std::cout << "How many students: " << std::endl;
//     std::cin >> numberOfStudents;

//     int *studentIds = new int[numberOfStudents];

//     for (int i = 0; i < numberOfStudents; i++)
//     {
//         studentIds[i] = i;
//     }

//     delete[] studentIds;

//     std::cout << *studentIds;
// }

#include <iostream>

int main()
{

    // int * arr;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    int *arr = new int[n]; // dynamically allocate memory for array;
    // arr = new int[n];

    // input values

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter Number: " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    // output values

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    delete[] arr;
}