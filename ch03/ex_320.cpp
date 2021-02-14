#include <vector>
#include <iostream>

int main() {
    int i;
    std::vector<int> ivec;
    while(std::cin >> i) {
        ivec.push_back(i);
    }

    std::cout << "Sum of adjecent integers: " << std::endl;
    for(size_t index = 0; index < ivec.size(); index += 2) {
        int total = ivec[index];
        if(index+1 < ivec.size()) {
            total += ivec[index+1];
        }
        std::cout << total << " ";
    }
    std::cout << std::endl;


    std::cout << "Sum of both n-shifted int from both endpoints: " << std::endl;
    int midpoint;
    if(ivec.size() % 2 > 0) { // Odd
        midpoint = ((ivec.size()-1)/2)+1;
    } else { // Even
        midpoint = ivec.size()/2;
    }
    for(size_t loc = 1; loc <= midpoint; loc++) {
        std::cout << ivec[loc-1] + ivec[ivec.size() - loc] << " ";
    }
    std::cout << std::endl;

    return 0;
}