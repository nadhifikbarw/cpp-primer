#include <iostream>

// Original statement from book is not legal.
// Because it doesnt follow the correct syntactic structure for legal statements

// Below is the fixed program
int main()
{
	std::cout << "Enter numbers: " << std::endl;
	int x1 = 0, x2 = 0;
	std::cin >> x1 >> x2;
	std::cout << "The sum of " << x1;
	std::cout << " and " << x2;
	std::cout << " is " << x1 + x2 << std::endl;
}
