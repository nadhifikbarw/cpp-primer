#include <iostream>
#include <vector>

using std::vector;

int main()
{
    vector<int> iVec;
    for(auto i = 0; i < 10; i++)
    {
        iVec.push_back(i);
    }
    for(auto &el : iVec)
    {
        std::cout << el;
    }
    std::cout << std::endl;
}
