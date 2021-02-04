#include <iostream>

int main()
{
	std::cout << "Enter numbers: " << std::endl;
	int x1 = 0, x2 = 0;
	std::cin >> x1 >> x2;
	std::cout << "The result of multiplication between ";
	std::cout << x1;
	std::cout << " and ";
	std::cout << x2;
	std::cout << " is ";
	std::cout << x1*x2;
	std::cout << std::endl;
}
