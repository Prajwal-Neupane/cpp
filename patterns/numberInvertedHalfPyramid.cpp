#include <iostream>

int main()
{

    int n;
    std::cin >> n;

    for (int i = 5; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {

            std::cout << j;
        }
        std::cout << std::endl;
    }
}

// Output:
// 12345
// 1234
// 123
// 12
// 1