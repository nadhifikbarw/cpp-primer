#include <iostream>
#include <string>
#define log(x) std::cout << x << std::endl

int main() {
    std::string s1, s2;
    log("Enter first phrase:");
    while(std::getline(std::cin, s1)){
        // Loop if string s1 is empty
        if(s1.length() <= 0){
            log("Empty phrase, please input valid phrase");
            continue;
        }
        break;
    }

    log("Enter second phrase:");
    while(std::getline(std::cin, s2)){
        // Loop if string s1 is empty
        if(s2.length() <= 0){
            log("Empty phrase, please input valid phrase");
            continue;
        }
        break;
    }

    log("\nSize report:");
    if(s1 != s2) {
        if(s1 > s2) {
            log("First phrase is larger");
        } else {
            log("Second phrase is larger");
        }
    } else {
        log("Both phrase is of same size");
    }
    
    log("\nLength report:");
    if(s1.length() != s2.length()){
        if(s1.length() > s2.length()) {
            log("First phrase is longer");
        } else {
            log("Second phrase is longer");
        }
    } else {
        log("Both phrase is of same length");
    }
}