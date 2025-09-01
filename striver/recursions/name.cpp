#include <iostream>

void printName(int count)
{
    if (count == 0)
        return;

    std::cout << "Prajwal";
    printName(--count);
}

int main()
{

    int n;
    std::cin >> n;

    printName(n);
    int count = 5;

    // printName(count);
}