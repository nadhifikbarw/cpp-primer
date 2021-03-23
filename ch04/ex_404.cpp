#include <iostream>

int main() 
{
    double original = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    double  paran = ((12 / 3) * 4) + (5 * 15) + (24 % (4/2));
    std::cout << original << " " << paran << std::endl;
}