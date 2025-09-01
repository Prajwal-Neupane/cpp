#include <iostream>

void printNumber(int i, int n)
{
    // std::cout << n;
    if (i > n)
    {
        return;
    }
    std::cout << i;
    printNumber(i + 1, n);
}

void printFromNto1(int n)
{
    if (n < 1)
    {
        return;
    }
    std::cout << n;
    printFromNto1(--n);
}

int main()
{

    int n;
    std::cin >> n;
    int i = 1;
    // printNumber(i, n);
    printFromNto1(n);
}