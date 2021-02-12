#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data data1, data2;
    double price;
    std::cout << "Enter first transaction: " << std::endl;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    
    std::cout << "Enter second transaction: " << std::endl;
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if(!data1.bookNo.compare(data2.bookNo)) {
        unsigned int units_sold = data1.units_sold + data2.units_sold;
        double revenue = data1.revenue + data2.revenue;
        double avg = revenue / units_sold;
        std::cout << data1.bookNo << " " << units_sold << " " << revenue << " " << avg << std::endl;
        return 0;
    }
}