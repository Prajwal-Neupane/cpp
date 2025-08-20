#include <iostream>

int checkPalindrome(int n)
{
    int number = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        number = number * 10 + lastDigit;
        n /= 10;
    }
    return number;
}

int main()
{
    int n;
    std::cin >> n;

    int reverse = checkPalindrome(n);
    if (n == reverse)
    {
        std::cout << "Palindrome";
    }
    else
    {
        std::cout << "Not Palindrome";
    }
}