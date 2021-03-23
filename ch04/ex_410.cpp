#include <iostream>

int main()
{
    int i {0};
    while(std::cin >> i)
    {
        if(i != 42)
        {
            std::cout << i << std::endl;
        } else 
        {
            break;
        }
    }
}