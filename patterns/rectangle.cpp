#include <iostream>

int main()
{
    int rows, cols;

    std::cout << "Enter rows and columns: ";
    std::cin >> rows >> cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Output:

// *****
// *****
// *****
// *****
// *****