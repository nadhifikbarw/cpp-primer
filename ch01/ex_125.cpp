#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item current_isbn, tx; int txcount = 0;
	if(std::cin >> current_isbn)
	{
		txcount = 1;
		while(std::cin >> tx)
		{
			if(current_isbn.isbn() == tx.isbn())
			{
				txcount++;
			}
			else
			{
				std::cout << current_isbn.isbn() << " occurs " << txcount << " times" << std::endl;
				current_isbn = tx;
				txcount = 1;
			}
		}
		std::cout << current_isbn.isbn() << " occurs " << txcount << " times" << std::endl;
	}
}
