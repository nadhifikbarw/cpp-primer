#include <iostream>
#include <vector>

using std::vector;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {0,1,2,3,4};

    // Compare array
    bool sameArr = true;
    for(auto i = 0; i < 5; i++)
    {
        if(arr[i] != arr2[i])
        {
            sameArr = false;
            break;
        }
    }
    
    vector<int> vec = {1,2,3,4,5};
    vector<int> vec2 = {1,2,3,4,5};
    
    bool sameVec = vec.size() == vec2.size();
    if(sameVec == true)
    {
        for(int i = 0; i < vec.size(); i++)
        {
            if(vec[i] != vec2[i])
            {
                sameVec = false;
                break;
            }
        }
    }

    std::cout << "Is both array the same? " << (sameArr ? "True" : "False") << std::endl;
    std::cout << "Is both vector the same? " << (sameVec ? "True" : "False") << std::endl;
}