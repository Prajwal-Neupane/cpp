#include <iostream>

int reverse_digit(long n)
{

    long number = 0;

    while (n != 0)
    {
        int lastDigit = n % 10;
        // if (lastDigit != 0)
        // {

        //     number = number * 10 + lastDigit;
        // }
        number = number * 10 + lastDigit;
        n /= 10;
    }
    return number;
}
int main()
{

    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    long result = reverse_digit(n);
    // int result = 0;

    // while (n > 0)
    // {
    //     int lastDigit = n % 10;

    //     result = result * 10 + lastDigit;
    //     n = n / 10;
    // }

    std::cout << "The reverse number is: " << result;
}