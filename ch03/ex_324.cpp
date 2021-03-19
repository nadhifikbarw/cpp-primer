#include <vector>
#include <iostream>

using std::vector;

int main()
{
    int i;
    vector<int> ivec;
    std::cout << "[Input] ";
    while(std::cin >> i)
    {
        ivec.push_back(i);
    }

    std::cout << "Sum of adjecent element" << std::endl;
    for(auto iterator = ivec.begin(); iterator != ivec.end(); iterator++)
    {
        if(!ivec.empty())
        {
            auto total = *iterator;
            iterator += 1;
            if(iterator != ivec.end()) total += *(iterator);
            std::cout << total << " ";
            if(iterator == ivec.end()) {
                break;
            }
        }
    }
    std::cout << std::endl;

    std::cout << "Sum of end-to-end element" << std::endl;
    for(int i = 0; i <= ivec.size()/2; i++)
    {
        auto front = ivec.begin()+i;
        auto back = ivec.end()-(i+1);
        if(front == back)
        {
            std::cout << *front;
            break;
        } else
        {
            std::cout << *front + *back << " ";
            if (front+1 == back) break;
        }
    }
    std::cout << std::endl;
}