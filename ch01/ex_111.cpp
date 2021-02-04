#include <iostream>

int main()
{
	// Get range
	std::cout << "Enter range (order doesn't matter): " << std::endl;
	int start = 0, end = 0, temp = 0;
	std::cin >> start >> end;

	// Swap if start is bigger
	if(start > end) { temp = start; start = end; end = temp; }

	// Reuse temp variable for sum
	temp = 0;

	// Calculate
	while(start <= end)
	{
		temp += start;
		start++;
	}

	// Report
	std::cout << "Sum: " << temp << std::endl;
	return 0;
}
