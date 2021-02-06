#include <iostream>

int main() {
    int i, &ri = i;
    // Bound to the same memory;
    std::cout << &i << " " << &ri << std::endl;
    // Modifiying the same memory
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
}