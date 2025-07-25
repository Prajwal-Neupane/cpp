#include <iostream>
#include <array>
int main()
{

    std::array<int, 5> arr1{1, 2, 3, 4, 5};

    for (int i = 0; i < arr1.size(); i++)
    {

        std::cout << i << std::endl;
    }

    // int arr[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++)
    // {

    //     std::cout << "Hello" << std::endl;
    // }
}