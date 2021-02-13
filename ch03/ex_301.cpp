#include <iostream>
#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;

// Rewrite 1.4.1 page 13, leveraging using keyword
void ex_141() {
    int sum = 0, val = 1;
    while(val <= 10) {
        sum += val;
        ++val;
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
}

// Rewrite exercise 2.6.2 page 76
void ex_262() {
    Sales_data data1, data2;
    double price;

    cout << "Enter 1st data: " << endl;
    cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    cout << "Enter 2nd data: " << endl;
    cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if(!data1.bookNo.compare(data2.bookNo)) {
        unsigned int total = data1.units_sold + data2.units_sold;
        
    } else {
        cout << "Transaction data bookNo is not the same" << endl;
    }
}

int main() {
    ex_141();
    ex_262();
    return 0;
}