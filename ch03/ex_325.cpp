#include <vector>
#include <iostream>

using std::vector;

int main()
{
    unsigned i;
    vector<unsigned int> scores(11, 0);
    while (std::cin >> i)
    {
        if(i <= 100)
            *(scores.begin()+(i/10)) += 1;
        else
            *(scores.end()-1) += 1;
    }
    for(int x : scores)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}