#include <iostream>

void printRectangle(int n)

{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void halfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void numberPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}

void number2Pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i;
        }
        std::cout << std::endl;
    }
}

void inversePyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void inverseNumberPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
}

void pyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }
        // Star
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            std::cout << "*";
        }
        // Space
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void reversePyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Space
        for (int j = 1; j < i; j++)
        {

            std::cout << " ";
        }
        // Star
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            std::cout << "*";
        }
        // Space
        for (int j = 1; j < i; j++)
        {

            std::cout << " ";
        }

        std::cout << std::endl;
    }
}
void combineHalfPyramidAndInversePyramid(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
void binaryHalfPyramid(int n)
{
    int start = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;
        for (int j = 1; j <= i; j++)
        {
            std::cout << start;
            start = 1 - start;
        }
        std::cout << std::endl;
    }
}
void numberHollowPyramid(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // Number
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        // Space
        for (int j = 1; j <= space; j++)
        {
            std::cout << " ";
        }
        // Number
        for (int j = i; j >= 1; j--)
        {
            std::cout << j;
        }
        std::cout << std::endl;
        space -= 2;
    }
}
void increaseNumberPyramid(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << count << " ";
            count++;
        }
        std::cout << std::endl;
    }
}
void alphabetHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char code = 'A';
        for (int j = 1; j <= i; j++)
        {

            std::cout << code;
            code++;
        }
        // code = 'A';
        std::cout << std::endl;
    }
}
void reverseAlphabetHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char code = 'A';
        for (int j = n; j >= i; j--)
        {
            std::cout << code;
            code++;
        }
        std::cout << std::endl;
        // code = 'A';
    }
}
void reverseDigitAlphabetHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char alphabet = 'A' + char(n - i);
        for (int j = 1; j <= i; j++)
        {
            std::cout << alphabet << " ";
            alphabet++;
        }
        std::cout << std::endl;
        // alphabet = 'A' + char(n - 1);
    }
}

void practicePrinting()
{
    char alphabet = 'A';
    std::cout << alphabet + 1;
}
int main()
{
    int n;
    std::cin >> n;
    // printRectangle(n);
    // halfPyramid(n);
    // numberPyramid(n);
    // number2Pyramid(n);
    // inversePyramid(n);
    // inverseNumberPyramid(n);
    // pyramid(n);
    // reversePyramid(n);
    // combineHalfPyramidAndInversePyramid(n);
    // binaryHalfPyramid(n);
    // numberHollowPyramid(n);
    // increaseNumberPyramid(n);
    alphabetHalfPyramid(n);
    reverseAlphabetHalfPyramid(n);
    // reverseDigitAlphabetHalfPyramid(n);
    // practicePrinting();
}