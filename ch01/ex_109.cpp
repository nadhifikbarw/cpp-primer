#include <iostream>
#define START 50
#define STOP 100

int main()
{
	int index = START, sum = 0;
	while(index <= STOP)
	{
		sum += index;
		index++;
	}
	std::cout << "Sum: " << sum << std::endl;
	return 0;
}
