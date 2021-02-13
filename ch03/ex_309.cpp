#include <string>
#include <iostream>

int main() {
    std::string s;
    std::cout << s[0] << std::endl; // Printing \0
    // ASCII code checking
    std::cout << int(s[0]) << std::endl; // ASCII code for \0 is 0
    return 0;
}