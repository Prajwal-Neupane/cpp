#include <iostream>

int main()
{

    int rows, cols;
    std::cout << "Enter rows and columns: ";

    std::cin >> rows >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = cols; j >= i; j--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Output:
// *****
// ****
// ***
// **
// *
