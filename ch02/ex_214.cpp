#include <iostream>

int main() {
    int i = 100, sum = 0;
    for(int i = 0; i != 10; ++i)
        sum += i;
        // Legal because nested loop
    std::cout << i << " " << sum << std::endl;
    // Result: 100 45; since i=100 is the only variable that's available in the scope
}

