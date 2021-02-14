#include <vector>

using std::vector;

int main() {
    // Three way to define vector of 10, int(42) element
    vector<int> v1(10, 42); // Preferred
    vector<int> v2{42,42,42,42,42,42,42,42,42,42};
    vector<int> v3; v3.assign(10,42);
    return 0;
}