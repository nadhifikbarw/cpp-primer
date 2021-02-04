#include <iostream>
#define START 50
#define STOP 100

int main()
{
	int index = STOP, sum = 0;
	while(index >= START)
	{
		sum += index;
		index--;
	}
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
