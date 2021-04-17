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
        std::cout << grade << " " << (
            (grade < 60)
                ? "Fail" 
                : (
                    (grade <= 75)
                    ? "Pass"
                    : "High Pass"
                )
            ) << std::endl;
    }

    // It's easier for many condition
    std::cout << "\nIf else version\n" << std::endl;
        for(auto it = iVec.begin(); it != iVec.end(); ++it)
    {
        auto grade = *it;
        std::string score;

        if(grade < 60) {
            score = "Fail";
        } else if (grade <= 75) {
            score = "Pass";
        } else {
            score = "High Pass";
        }
        std::cout << grade << " " << score << std::endl;
    }
}