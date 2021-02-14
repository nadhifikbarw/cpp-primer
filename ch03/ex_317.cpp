#include <vector>
#include <string>
#include <cctype>
#include <iostream>

using std::vector;
using std::string;

int main() {
    string word;
    vector<string> stringvec;
    
    while(std::cin >> word) {
        for (auto &c : word)
        {
            c = toupper(c);
        }
        stringvec.push_back(word);
    }
    for(auto &el: stringvec){
        std::cout << el << " ";
    }
    std::cout << std::endl;
    return 0;
}