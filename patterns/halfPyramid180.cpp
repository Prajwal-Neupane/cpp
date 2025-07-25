// #include <iostream>

// int main()
// {

//     int rows, cols;

//     std::cout << "Enter rows and columns: ";
//     std::cin >> rows >> cols;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = cols; j >= i; j--)
//         {
//             std::cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
// }

#include <iostream>

int main()
{

    int rows, cols;

    std::cout << "Ente rows and columns: ";

    std::cin >> rows >> cols;

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= cols; j++)
        {
            if (j <= rows - i)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }
}

// Output:

//     *
//    **
//   ***
//  ****
// *****
