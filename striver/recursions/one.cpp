#include <iostream>

void newFunction()
{
    std::cout << "1";
    newFunction();
}

int main()
{
    newFunction();
}