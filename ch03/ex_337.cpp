#include <iostream>


int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp)
    {
        std::cout << *cp << std::endl;
        ++cp;
    }
}

// This program while-loop until they found \0; but since array doesnt have \0 this program is dangerous
// and wont stop until found \0