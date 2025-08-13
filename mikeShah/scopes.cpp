#include <iostream>
#include <array>
#include <numeric>
// #include <iterator>

int main()
{
    // int ids[100];             // RAW array
    std::array<int, 100> ids; // STL

    std::iota(std::begin(ids), std::end(ids), 10);

    for (int i = 0; i < 100; i++)
    {
        std::cout << ids[i] << std::endl;
    }
}