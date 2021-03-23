#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5};

    auto first = * vec.begin(); // Function return pointer and then dereference operator kicks in to load 
    auto second = * vec.begin() + 1; // Same order with previous case then continued with + operator, returning rvalue

    std::cout << first << std::endl;
    std::cout << second << std::endl;
}