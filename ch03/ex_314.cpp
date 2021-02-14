#include <vector>
#include <iostream>

using std::vector;

int main() {
    int input;
    vector<int> ivec;
    while(std::cin >> input) {
        ivec.push_back(input);
    }
    for (auto &&input : ivec)
    {
        std::cout << input << " ";
    }
    std::cout << std::endl;
    
}