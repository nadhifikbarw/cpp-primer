#include <iostream>
#define log(x) std::cout << x << std::endl
#define logmem(x) std::cout << &x << std::endl

int main () {
    const int i = 42;
    auto j = i; // Int
    const auto &k = i; // Reference to i
    auto *p = &i; // Pointer to const int, exactly same as auto p = &i;
    const auto j2 = i, &k2 = i; // const int j2 = 42; k2 = reference to const int i;
}