#include <iostream>

int main()
{
    // Overflow is when variable data type is not enough
    // Compile with -w flag
    short a = 126369976222312312123123123123123123373942;
    unsigned b = 2222338838848842838383812312312312312312312312312328382383;
    long c = 31928398939289329389283982938923892932398239892389289392389829389823983298232323;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}