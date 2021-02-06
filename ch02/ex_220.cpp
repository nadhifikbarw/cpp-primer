#include <iostream>
#define Log(x) std::cout << x << std::endl

int main() {
    int i = 42;
    int* p1 = &i;
    *p1 = *p1 * *p1;

    // This program is basically the same as;
    // int i = 42;
    // i = 42 * 42; 
}