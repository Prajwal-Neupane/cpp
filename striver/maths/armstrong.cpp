#include <iostream>
// #include <cmath>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}

long checkArmstrong(int n)
{

    long number = 0;
    int count = 0;
    int temp = n;

    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    while (n != 0)
    {
        long lastDigit = (n % 10);
        number = number + power(lastDigit, count);

        // std::cout << number;
        // std::cout << count;
        // std::cout << lastDigit << " ";
        n /= 10;
    }
    return number;
}

int main()
{

    long n;
    std::cin >> n;

    long result = checkArmstrong(n);
    // std::cout << result;
    if (result == n)
    {
        std::cout << "Armstrong";
    }
    else
    {
        std::cout << "Not Armstrong";
    }
}