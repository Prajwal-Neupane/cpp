#include <iostream>

long countDigit(long n)
{
    int count = 0;

    while (n != 0)
    {
        long lastDigit = n % 10;
        count++;
        n /= 10;
    }
    return count;
}

int main()
{

    long n;
    std::cin >> n;

    long count = countDigit(n);
    std::cout << "The total digits are : " << count;
}