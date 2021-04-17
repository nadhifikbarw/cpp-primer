#include <iostream>

int main() {
    int x = 1;
    std::cout << "Prefix: " << std::endl;
    std::cout << x << std::endl;
    std::cout << ++x << std::endl; // Add first then return
    std::cout << x << std::endl;

    x = 1;
    std::cout << "Postfix: " << std::endl;
    std::cout << x << std::endl;
    std::cout << x++ << std::endl; // Fetch first and then add
    std::cout << x << std::endl;
}