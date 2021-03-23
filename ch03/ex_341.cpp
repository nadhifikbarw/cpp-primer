#include <iostream>
#include <vector>

int main()
{
    int arr[] = {1,2,3,4,5};
    std::vector<int> vec(std::begin(arr), std::end(arr));

    for(auto &el : vec)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}