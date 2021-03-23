#include <iostream>

int main()
{
    constexpr int row_size = 3, col_size = 4;
    int ia[row_size][col_size] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    // First Version using for-range
    std::cout << "First Method" << std::endl;
    for(const int (&row)[4] : ia)
    {
        std::cout << "{ ";
        for (const int &el : row) std::cout << el << " "; 
        std::cout << "}" << std::endl;
    }

    // Second version using subscript
    std::cout << "Second Method" << std::endl;
    for(int i = 0; i < row_size; i++)
    {
        std::cout << "{ ";
        for(int j = 0; j < col_size; j++) std::cout << ia[i][j] << " ";
        std::cout << "}" << std::endl;
    }

    // Third version using pointer arithmatic
    std::cout << "Third Method" << std::endl;
    for(int (*i)[4] = ia; i != ia + row_size; i++)
    {
        std::cout << "{ ";
        for(int *j = *i; j != (*i + col_size); j++) std::cout << *j << " ";
        std::cout << "}" << std::endl;
    }
}