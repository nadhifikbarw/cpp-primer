#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item current_isbn;
	Sales_item tx;
	// Check if there's input
	if(std::cin >> current_isbn)
	{
		while(std::cin >> tx)
		{
			// Assuming its not different
			current_isbn += tx;
		}
	}
	std::cout << current_isbn << std::endl;
	return 0;
}
