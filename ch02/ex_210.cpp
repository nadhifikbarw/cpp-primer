#include <iostream>

std::string global_string;
int global_int;

int main(){
    int local_int; // Undefined
    std::string local_str; 

    std::cout << "Empty string: "  << global_string << std::endl;
    std::cout << "Empty int: "  << global_int << std::endl;
    std::cout << "Local int (undefined, change everytime): "  << local_int << std::endl;
    std::cout << "Empty string (std::string will need to call constructor): "  << local_str << std::endl;
}