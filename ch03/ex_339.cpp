#include <iostream>
#include <vector>

int main()
{
    const char str1[] = "hello,world";
    const char str2[] = "hello,worlD";

    // Compare
    bool sameStr = (sizeof(str1) == sizeof(str2));
    if(sameStr)
    {
        for (int i = 0; i < sizeof(str1); i++)
        {
            if(str1[i] != str2[i])
            {
                sameStr = false;
                break;
            }
        }
    }
    std::cout << "Both the same string? "  << (sameStr ? "Yes" : "No") << std::endl;
}