#include <iostream>
#include <vector>

void explainVector()

{
    std::vector<int> v; // It creates an empty container { }
    v.push_back(1);     // It push-backs {1} It takes 1 into the vector v.
    v.emplace_back(2);  // It dynamically inserts {2} in the array. So It'll be {1, 2}
    // Emplace_back is faster than push_back

    // Vector for Pairs
    std::vector<std::pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    std::vector<int> vec1(5, 100); // It creates a array of size 5 which contains 100 five times. {100, 100, 100, 100, 100}
    std::vector<int> vec2(5);      // It creates an array of size 5 which containes only 0 values 5 times. {0, 0, 0, 0, 0}

    vec2.push_back(5);
    vec2.emplace_back(3333);
    // Copying one vector to another

    std::vector<int> vec3(vec1);

    // Getting elements of vectors

    // 1.

    // for (int num : vec2)
    // {
    //     std::cout << num << " ";
    // }

    // 2.
    // std::cout << vec3[1];

    // 3.
    // std::vector<int>::iterator anything = vec2.begin();
    // anything++;
    // std::cout << *(anything) << " ";

    // anything += 2;
    // std::cout << *(anything) << " ";

    std::vector<int>::iterator anything1 = vec2.end(); // end points to the +1 of the last element {1, 2, 3, 4}. end() points to the element after 4. so for accessing 4 we've to do anything1--;

    // 4.
    for (std::vector<int>::iterator it = vec2.begin(); it != vec2.end(); it++) // Here vector iterator is defined
    {
        std::cout << *(it) << " ";
    }
    // 5.
    for (auto it = vec2.begin(); it != vec2.end(); it++) // But here vector has auto keyword that will automatically assign it a vector
    {
        std::cout << *(it) << " ";
    }

    // 6. Using For each loop
    for (auto it : vec2)
    {
        std::cout << it << " ";
    }

    // Vector Deletion
    // {10, 20, 30, 40, 50};
    vec.erase(vec.begin() + 1); // It will delete {20}

    // {10, 20, 40, 50, 33, 34, 23}  [start, end)
    vec.erase(vec.begin() + 1, vec.begin() + 4); // It will delete {20} and {40, 50}. The final vector will be {10,33, 34, 23}
}

int main()
{
    explainVector();
}