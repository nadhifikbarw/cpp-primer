#include <cctype>
#include <string>
#include <iostream>

void while_approach() {
    std::string s = "Hello, world";
    size_t i = 0;
    while(i < s.size()) {
        s[i] = 'X';
        i++;
    }
    std::cout << s << std::endl;
}

void traditionl_for_approach() {
    std::string s = "Hello, world";
    for(size_t i = 0; i < s.size();i++){
        s[i] = 'X';
    }
    std::cout << s << std::endl;
}

// Most readable, concise and enjoyable to write
void for_each_approach() {
    // For each
    std::string s = "Hello, world";
    for(char &c : s){ 
        c = 'X';
    }
    std::cout << s << std::endl;
}

int main() {
    while_approach();
    traditionl_for_approach();
    for_each_approach();
}