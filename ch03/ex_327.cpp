#include <iostream>

int txt_size()
{
    return 10;
}

int main() 
{
    unsigned buf_size = 1024;
    int ia[buf_size];
    int ia2[4*7 -14];
    int ia3[txt_size()];
    // char st[11] = "fundemental"; Illegal because 11 array of char is not enough for null char
}