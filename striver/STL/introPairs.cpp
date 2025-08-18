#include <iostream>
// #include <utility>
// Pair is inside the  utility library

void pairs()
{
    //  Single Pair
    std::pair<int, int> p = {1, 3};
    std::cout << p.first;
    std::cout << p.second;
    // Nested Pair

    std::pair<int, std::pair<int, int>> p2 = {1, {3, 4}};
    std::cout << p2.first;
    std::cout << p2.second.second;

    std::pair<int, int> arr[] = {{1, 2}, {4, 3}, {5, 4}, {8, 9}};

    // IN Pair Array {1,2} = 0, {4, 3} = 1, {5, 4 } = 2 ........
    // In {1, 2} 1 is first and 2 is second

    std::cout << arr[1].second;
}

int main()
{
    pairs();
}