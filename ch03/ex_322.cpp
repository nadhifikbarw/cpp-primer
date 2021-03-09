#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::string; using std::vector;

int main()
{
    vector<string> text;
    for (string line; getline(std::cin, line); text.push_back(line));

    for(auto &word: text)
    {
        for(auto &chr: word)
        {
            if(std::isalpha(chr)) chr = toupper(chr);
        }
        std::cout << word << std::endl;
    }
    return 0;
}