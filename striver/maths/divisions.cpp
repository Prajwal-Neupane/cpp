#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
void divisions(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << " ";
        }
    }
}

int main()
{

    int n;
    std::cin >> n;
    std::vector<int> lst;

    // divisions(n);
    // for(int i = 1; i*i<=n; i++) without using sqrt function
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            lst.push_back(i);
            if ((n / i) != i)
            {
                lst.push_back(n / i);
            }
        }
    }
    std::sort(lst.begin(), lst.end());
    for (auto it : lst)
    {
        std::cout << it << " ";
    }
}