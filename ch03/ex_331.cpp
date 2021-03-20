#include <iostream>

int main()
{
    int ia[10];
    for(auto i = 0; i < 10; i++)
    {
        ia[i] = i;
    }
    for(auto &el : ia)
    {
        std::cout << el;
    }
    std::cout << std::endl;
}