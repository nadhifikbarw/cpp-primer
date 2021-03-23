#include <iostream>

int main()
{
    double operation_a = -30 * 3 + 21 / 5; // -90 + 4(.2) = -86
    double operation_b = -30 + 3 * 21 / 4; // -30 + 15(.75) = -15
    double operation_c = 30 / 3 * 21 % 5; // 210 % 5 = 0
    double operation_d = -30 / 3 * 21 % 4; // -210 % 4 = -2

    std::cout << operation_a << std::endl;
    std::cout << operation_b << std::endl;
    std::cout << operation_c << std::endl;
    std::cout << operation_d << std::endl;
}