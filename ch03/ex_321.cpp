#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;

void print_int_vector(const vector<int>& vec)
{
    std::cout << "Vector size: " << vec.size() << "\nContent: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << (it != vec.end() - 1 ? "," : "");
    std::cout << "]\n" << std::endl;
}

void print_string_vector(const vector<string>& vec)
{
    std::cout << "Vector size: " << vec.size() << "\nContent: [";
    for (auto it = vec.begin(); it != vec.end(); ++it)
        std::cout << *it << (it != vec.end() - 1 ? "," : "");
    std::cout << "]\n" << std::endl;
}


int main() {
    vector<int> v1; // {}
    vector<int> v2(10); // {0,0,0 ... 0} 10 element of 0
    vector<int> v3(10, 42); // {42,42,42..42} 10 element of 42
    vector<int> v4{10}; // {10} one element of 10
    vector<int> v5{10,42}; // one element of 10 and 42 each respectively
    vector<string> v6{10}; // 10 element of empty string
    vector<string> v7{10, "h1"}; // 10 element of "hi" string    

    print_int_vector(v1);
    print_int_vector(v2);
    print_int_vector(v3);
    print_int_vector(v4);
    print_int_vector(v5);
    print_string_vector(v6);  
    print_string_vector(v7); 
}