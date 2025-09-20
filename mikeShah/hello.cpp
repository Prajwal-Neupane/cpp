// #include <iostream>

// int main()
// {

//     std::cout << "Print this: " << std::endl;
// }

#include <iostream>
#include <vector>

int main()
{

    std::vector<int> v;
    v.push_back(1);
    v.push_back(3);

    std::cout << "Size of vector is: " << sizeof(v) << std::endl;
    std::cout << "Actual size of vector is: " << v.size();
}