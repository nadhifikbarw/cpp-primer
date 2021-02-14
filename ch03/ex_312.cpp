#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
    vector<vector<int>> ivec; // Legal, create vector of int vector;
    // vector<string> svec = ivec;
    // Trying to assign ivec (vector of int vector) to vector of string
    
    vector<string> svec(10, "null");
    // Legal, trying to create svec with initialized value of 10
    // "null" elements
    return 0;
}