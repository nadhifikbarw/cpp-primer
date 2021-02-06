#include <iostream>

void memtest();

int main() {
    // A
    int ival = 1.01; // Legal but information lost
    
    // B illegal because non object initializer value
    // int &rval = 1.01;
    // Fix:
    int &rval = ival;
    
    // C
    int &rval2 = ival; // legal
    
    // D illegal because not initialized
    // int &rval3;
    // Fix:
    int &rval3 = rval2; // Bound to the object that bounded to rval2

    // Memtest
    std::cout << ival << std::endl;
    std::cout << &ival << std::endl;
    std::cout << &rval2 << std::endl;
    std::cout << &rval3 << std::endl;
    ival = 10;
    std::cout << ival << std::endl;
    std::cout << &ival << std::endl;
    std::cout << &rval2 << std::endl;
    std::cout << &rval3 << std::endl;
}