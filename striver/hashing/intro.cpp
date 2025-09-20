#include <iostream>
int countNumbers(int n, int arr[], int target)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (target == arr[i])
        {
            count++;
        }
    }
    return count;
}

void iterateArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        int count = countNumbers(n, arr, arr[i]);
        std::cout << "Number " << arr[i] << "appears " << count << "times" << std::endl;
    }
}

int main()
{

    int n;
    std::cout << "Enter the size of array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    iterateArray(n, arr);
}