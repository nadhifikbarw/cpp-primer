#include <iostream>

int zero_init_int;
double zero_init_double;

int main() {
    // A
    // Wrong because variable is not yet initialize
    // std::cin >> int input_value;
    int input_value;
    std::cin >> input_value;
    
    // B
    // This one is illegal
    // int i = {3.14};
    // Out-of-bound initialization
    // Corret:
    double i = {3.14};
    
    // C
    // Not legal cause wage is not initialize
    // Fix:
    double salary, wage;
    salary = wage = 9999.99;
    
    // D
    // Legal but information will be lost
    int i2 = 3.14;

    std::cout << input_value << "\n"
            << i << "\n"
            << salary << "\n"
            << wage << "\n"
            << i2 << "\n" << std::endl;

    // Always zero
    std::cout << "Always zero " << zero_init_int << std::endl; 
    std::cout << "Always zero " << zero_init_double << std::endl;
}