#include <cctype>
#include <string>
#include <iostream>

int main() {
    // For each
    std::string s = "Hello, world";
    for(char c : s){ 
        // If c is char instead it will create a copy of that charcter
        c = 'X'; // Mutating the copy of char instead of string char
    }
    std::cout << s << std::endl;
    return 0;
}