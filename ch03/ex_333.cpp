#include <iostream>


int main()
{
    // Uninitialized array wont clear out memory value that's being used by the array to zero 
    unsigned scores[11];
    unsigned grade;
    while (std::cin >> grade)
    {
        if (grade <= 100)
            ++scores[grade/10];
    }

    for (auto &el : scores)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}