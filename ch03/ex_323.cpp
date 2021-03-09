#include <vector>
#include <iostream>

using std::vector;

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    for(auto number = vec.begin(); number != vec.end(); number++)
    {
        *number *= 2;
        std::cout << *number << " ";
    }
    std::cout << std::endl;
}