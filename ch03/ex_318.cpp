#include <vector>
using std::vector;

int main() {
    //vector<int> ivec;
    // ivec[0] = 42; // This is illegal and will result in segmentation fault
    // Fix:
    vector<int> ivec{42}; 
}