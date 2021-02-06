#include <iostream>
#define Log(x) std::cout << x << std::endl

int main() {
    int a = 5;
    int b = 10;

    int* ptr = &a;
    Log(*ptr);
    ptr = &b;
    Log(*ptr);
}