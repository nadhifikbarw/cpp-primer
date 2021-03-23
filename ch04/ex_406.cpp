#include <string>
#include <iostream>

int main()
{
    // input
    int input = 1989;
    std::string even_odd = (input % 2 ? "Odd" : "Even");
    std::cout << even_odd << std::endl;
}