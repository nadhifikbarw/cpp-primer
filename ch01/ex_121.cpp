#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Enter two tx:" << std::endl;
	Sales_item tx1, tx2;
	std::cin >> tx1 >> tx2;
	std::cout << "Report: " << tx1 + tx2 << std::endl;
	return 0;
}
