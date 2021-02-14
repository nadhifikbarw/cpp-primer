#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

int main() {
    string input;
    vector<string> ivec;
    while(std::cin >> input) {
        ivec.push_back(input);
    }
    for (auto &&input : ivec)
    {
        std::cout << input << " ";
    }
    std::cout << std::endl;
    
}