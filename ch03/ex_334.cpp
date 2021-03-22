#include <iostream>

int main() {
    int iArr[5] = {1,2,3,4,5};
    int *p1 = &iArr[1];
    int *p2 = &iArr[0];

    p1 += p2 - p1; // Legal because p2 - p1 = -1
    // p1 = 1 - 1
    // p1 = 0
    // *p1 = 1

    // std::cout << *(p2 - p1) << std::endl; Illegal statement because it tries to dereference ptrdiff_t
    std::cout << *p1 << std::endl;
}