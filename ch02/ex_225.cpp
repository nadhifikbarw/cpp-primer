int main() {
    // A
    // This is illegal / compiler warn
    // Since r is reference to int variable but init value thats is given is pointer variable for int
    // int *ip, &r = ip;
    // Fix:
    int *ip, *&r = ip;
    // Or less confusing:
    int* ip2;
    int* &r = ip2; // Read it from right to left: "r is REFERENCE for INT POINTER variable"
}