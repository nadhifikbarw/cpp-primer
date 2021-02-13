#include <cctype>
#include <string>
#include <iostream>

int main(){
    std::string s, res;
    std::cout << "Enter phrase: " << std::flush;
    while(getline(std::cin, s)) {
        if(s.length() > 0) {
            for(auto &c: s) {
                if(!ispunct(c)) {
                    res += c;
                }
            }
            break;    
        }
        continue;
    }
    std::cout << "Cleaned: " << std::flush;
    std::cout << res << std::endl;
    return 0;
}