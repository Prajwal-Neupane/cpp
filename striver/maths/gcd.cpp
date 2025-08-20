#include <iostream>
#include <algorithm>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    int gcd = 1;

    for (int i = 1; i <= std::min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    std::cout << "GCD is: " << gcd;
}