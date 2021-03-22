#include <iostream>
#include <vector>

int main() 
{
    int iArr[10];
    auto begin = std::begin(iArr); auto end = std::end(iArr);
    while(begin < end)
    {
        *begin = 0;
        begin++;
    }
    for (auto &el : iArr)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}