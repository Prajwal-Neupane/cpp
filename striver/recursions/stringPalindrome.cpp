#include <iostream>
#include <string>

bool checkPalindrome(int i, std::string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return checkPalindrome(i + 1, s);
}

int main()
{
    std::string word;

    std::cout << "Enter a word: ";
    std::cin >> word;

    std::cout << checkPalindrome(0, word);
}