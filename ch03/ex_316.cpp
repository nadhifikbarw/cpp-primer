#include <vector>
#include <string>
#include <iostream>
#define check_size(vec) std::cout << vec.size() << std::endl;

using std::vector;
using std::string;

int main() {
    vector<int> v1; // {}
    vector<int> v2(10); // {0,0,0 ... 0} 10 element of 0
    vector<int> v3(10, 42); // {42,42,42..42} 10 element of 42
    vector<int> v4{10}; // {10} one element of 10
    vector<int> v5{10,42}; // one element of 10 and 42 each respectively
    vector<string> v6{10}; // 10 element of empty string
    vector<string> v7{10, "h1"}; // 10 element of "hi" string
    
    // Size checking
    check_size(v1);
    check_size(v2);
    check_size(v3);
    check_size(v4);
    check_size(v5);
    check_size(v6);
    check_size(v7);

    return 0;
}