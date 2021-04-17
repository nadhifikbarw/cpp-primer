#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iVec {1,2,3,4,5,6,7,8,9,10};
    for(auto it = iVec.begin(); it != iVec.end(); ++it)
    {
        *it = (*it % 2) != 0 ? *it * 2 : *it;
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}