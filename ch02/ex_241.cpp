#include <iostream>
#include <string>
#define log(x) std::cout << x << std::endl
#define MAX_LOOP 3

// Copy of Sales_data struct from Sales_data.h
// Instruction from book to define in same file
struct Sales_data {
    std::string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

int main() {
    
    log("Rewrite exercises using Sales_data");
    log("Exercise Section 1.5.1");
    log("Exercise 1.20");

    log("Enter transactions: ");
    Sales_data sale;
    double price;
    for(int i = 0; i < MAX_LOOP; i++) {
        std::cin >> sale.bookNo >> sale.units_sold >> price;
        sale.revenue = sale.units_sold * price;
        log(sale.bookNo << " " << sale.units_sold << " " << sale.revenue << " " << sale.revenue/sale.units_sold);
    }

    log("Exercise 1.21");
    log("Enter transaction: ");
    Sales_data sale1, sale11;
    double price1;
    // Get sale1
    std::cin >> sale1.bookNo >> sale1.units_sold >> price1;
    sale1.revenue = price1 * sale1.units_sold;
    // Get sale11
    std::cin >> sale11.bookNo >> sale11.units_sold >> price1;
    sale11.revenue = price1 * sale11.units_sold;
    // Sales_item also assume ISBN is same
    log(
        sale1.bookNo << " "
        << sale1.units_sold + sale1.units_sold << " "
        << sale1.revenue + sale11.revenue << " "
        << (sale1.revenue + sale11.revenue) / (sale1.units_sold + sale11.units_sold)
    );

    log("Exercise 1.22");
    log("Enter transaction: ");
    Sales_data sale2;
    double price2;
    if(std::cin >> sale2.bookNo >> sale2.units_sold >> price2){
        Sales_data tx2;
        sale2.revenue = sale2.units_sold * price2;
        while(std::cin >> tx2.bookNo >> tx2.units_sold >> price2){
            tx2.revenue = tx2.units_sold * price2;
            // Sales_item also assume ISBN is same
            sale2.units_sold += tx2.units_sold;
            sale2.revenue += tx2.revenue;
        }
        log(
            sale2.bookNo << " "
            << sale2.units_sold << " "
            << sale2.revenue << " "
            << sale2.revenue/sale2.units_sold
        );
    }

    log("Exercise Section 1.5.2");
    log("Exercise 1.23");
    Sales_data sale3;
    unsigned int tx_count3 = 0;
    double price3;
    if(std::cin >> sale3.bookNo >> sale3.units_sold >> price3){
        Sales_data tx3;
        tx_count3 = 1;
        sale3.revenue = sale3.units_sold * price3;
        while(std::cin >> tx3.bookNo >> tx3.units_sold >> price3){
            tx3.revenue = tx3.units_sold * price3;
            if(!sale3.bookNo.compare(tx3.bookNo)) {
                sale3.units_sold += tx3.units_sold;
                sale3.revenue += tx3.revenue;
            } else {
                log(
                    sale3.bookNo << " "
                    << sale3.units_sold << " "
                    << sale3.revenue << " "
                    << sale3.revenue/sale3.units_sold << " occurs "
                    << tx_count3 << " times "
                );
                tx_count3 = 1;
                sale3.bookNo = tx3.bookNo;
                sale3.units_sold = tx3.units_sold;
                sale3.revenue = tx3.revenue;
            }
        }
        log(
            sale3.bookNo << " "
            << sale3.units_sold << " "
            << sale3.revenue << " "
            << sale3.revenue/sale3.units_sold << " occurs "
            << tx_count3 << " times "
        );
    }
}