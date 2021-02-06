#include <iostream>
int main() {
    // If pointer is null pointer
    int* p = nullptr;
    if(p) {
        std::cout << p << std::endl; // If this is printed will cause segmentation fault
    } else {
        std::cout << "nullptr" << std::endl;
        // Will print this, because null pointer is falsy
    }

    // If pointer is not null pointer
    int a = 10;
    int* p2 = &a;
    if(p2) {
        std::cout << p2 << std::endl;
    } else {
        std::cout << "nullptr" << std::endl;
        // Will print this, because null pointer is falsy
    }

    // Explaination
    // the null pointer is implicitly converted into boolean false
    // while non-null pointers are converted into true. From the C++11 standard
    // https://stackoverflow.com/questions/42834996/why-a-condition-that-contains-a-pointer-always-returns-true/42835035


    // Dereferencing pointer with correct value
    int b = 10;
    int* p4 = &b;
    if(*p4) { // Dereferencing nullptr will cause segmentation fault
        std::cout << *p4 << std::endl;
    } else {
        std::cout << "nullptr" << std::endl;
    }

    // Dereferencing null pointer
    int* p3 = nullptr;
    if(*p3) { // Dereferencing nullptr will cause segmentation fault
        std::cout << p3 << std::endl;
    } else {
        std::cout << "nullptr" << std::endl;
    }
}