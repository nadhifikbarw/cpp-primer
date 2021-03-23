#include <iostream>

int main()
{
    int i = 1, j = 2, k = 3;
    auto x = i != j < k; // Means i != (j < k);
    std::cout << x << std::endl; 
}