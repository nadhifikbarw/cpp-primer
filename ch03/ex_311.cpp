#include <string>
#include <iostream>

int main() {
    const std::string s = "Keep out!";
    for(auto &c : s) {
        // Do something so long not trying to mutate string
        // trying to mutate = Compiler error
        // c = 'X';
        std::cout << c << std::endl;
    }
    return 0;
}