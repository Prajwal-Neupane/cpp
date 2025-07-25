#include <iostream>

int changeX(int &x)
{
    return x = 20;
}
int main()
{

    int x = 5;

    std::cout << "Address of x is: " << &x << std::endl;
    changeX(x);
    std::cout << "Value of x after change is: " << x << std::endl;
}