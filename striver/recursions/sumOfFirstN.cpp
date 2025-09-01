// n = 3, 1 + 2 + 3 = 6

#include <iostream>

// Parameterized

void sumOfN(int n, int sum)
{
    if (n < 1)
    {
        std::cout << sum;
        return;
    }
    sum = sum + n;
    sumOfN(--n, sum);
}

// Functional

int fn(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + fn(n - 1);
}

int main()
{
    int sum = 0;

    int n;
    std::cin >> n;

    // sumOfN(n, sum);

    std::cout << "Result is: " << fn(n);
}
