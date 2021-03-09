#include <vector>
#include <iostream>

using std::vector;

int main()
{
    vector<int> vec = {1,3,2};
    for(auto iterator = vec.begin(); iterator != vec.end(); iterator++)
    {
        std::cout << *iterator << std::endl;
    }
}