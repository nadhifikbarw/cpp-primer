#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iVec {
        55,60,65,70,75,80,90,100
    };
    
    for(auto it = iVec.begin(); it != iVec.end(); ++it)
    {
        auto grade = *it;
        auto score = ((grade > 90) ? "High Pass" : (grade < 60) ? "Fail" : "Pass");
        std::cout << grade << " " << score << std::endl;
    }


}