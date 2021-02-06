int main() {
    int i = 0;
    //  A
    // double* dp = &i;
    // Illegal because dp is pointer for type double but initialize to point to int memory address

    // B
    // int* ip = i;
    // Technically not illegal, since i=0 so the pointer will point to NULL memadress but compiler would warn
    // Same as:
    int* ip = nullptr;

    // C, perfectly legal
    int  *p = &i;
}