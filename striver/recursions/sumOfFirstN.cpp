// n = 3, 1 + 2 + 3 = 6

#include <iostream>

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

int main()
{
    int sum = 0;

    int n;
    std::cin >> n;

    sumOfN(n, sum);
}
