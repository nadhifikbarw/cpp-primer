int main() {
    // Invalid
    // int i = -1, &r = 0;
    int i = -1, &r = i;
    
    // Invalid
    // int *const p2 = &i2;
    int *const p2 = &i;

    // Invalid
    // const int i = -1, &r = 0;
    const int i = -1, &r = i;

    // Invalid 
    // const int *const p3 = &i2;
    const int *const p3 = &i;
    
    // Invalid
    // const int *pi = &i2;
    const int *pi = &i;

    // invalid
    // const int &const r2

    // Valid
    const int i2 = i, &r = i;
}