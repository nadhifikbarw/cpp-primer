#include <iostream>
#include <string>

int main() {
    int word_count = 0;
    std::string word, words;
    std::cout << "Enter one word, end program with EOF (Ctrl+D)" << std::endl;
    while(std::cin >> word){
        if(word_count > 0) { word = " " + word; }
        words += word;
        ++word_count;
    }
    std::cout << "Words: " << words << std::endl;
    std::cout << "Word count: " << word_count << std::endl;
    return 0;
}