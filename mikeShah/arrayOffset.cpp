#include <iostream>

int main()
{

    int array[] = {1, 3, 6, 4, 5};

    int *px = array;

    // Show the array offset

    // Method 1
    std::cout << *(px + 0) << std::endl;
    std::cout << *(px + 1) << std::endl;
    std::cout << *(px + 2) << std::endl;
    std::cout << *(px + 3) << std::endl;
    std::cout << *(px + 4) << std::endl;

    std::cout << *array + 2;
}