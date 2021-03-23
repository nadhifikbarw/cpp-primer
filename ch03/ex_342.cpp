#include <vector>
#include <iostream>

using std::vector;

int main() {
    vector<int> vec = {1,2,3,4,7};
    auto vec_size = vec.size();
    int arr[vec_size];
    for (int i = 0; i < vec_size; i++)
    {
        arr[i] = vec[i];
    }
    for(auto &el : arr)
    {
        std::cout << el << " ";
    }
    std::cout << std::endl;
}