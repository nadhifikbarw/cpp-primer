#include <cctype>
#include <string>
#include <iostream>

int main() {
    // For each
    std::string s = "Hello, world";
    for(auto &c : s){
        c = 'X';
    }
    std::cout << s << std::endl;
    return 0;
}