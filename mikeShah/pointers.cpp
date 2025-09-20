// Pointers stores address. It is a datatype that stores address.

#include <iostream>

int main()
{

    int x = 5;
    int *px = &x;

    std::cout << "The value of x: " << x << std::endl;
    std::cout << "The address of x: " << &x << std::endl;
    *px = 4;
    std::cout << "px stores: " << *px << std::endl;
    std::cout << "The new value of x is: " << x;
}