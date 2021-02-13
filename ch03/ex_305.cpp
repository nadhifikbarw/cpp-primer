#include <string>
#include <iostream>
// Modify seperator
#define SEPARATOR " "

int main() {
    std::string words, word;
    while(std::cin >> word){
        if(words.length() == 0){ word = SEPARATOR + word; }
        words += word;
    }
    std::cout << words << std::endl;   
}