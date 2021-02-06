int main() {
    int i = 42;
    // Legal because void pointer = doesnt care about its data mem allocation size
    void *p = &i;

    // Illegal because the compiler realize the address thats passed for pointer
    // initialization is not of the same type. Compiler wil warn!
    // long *lp = &i;
}