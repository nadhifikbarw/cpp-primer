int main() {
    int i = 0, &r = i, *p = &i;

    // Deduce different type
    auto i2 = r; // i2 is int deduced from r, and drop reference
    decltype(r) r2 = i; // r2 is int& because r is int&

    // Deduce same type
    auto i3 = i; // Deduce to int
    decltype(i) i4 = i; // Deduce to int
}