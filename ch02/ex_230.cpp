int main() {
    const int v2 = 0;
    int v1 = v2;

    int *p1 = &v1;
    int &r1 = v1;

    const int *p2 = &v2;
    
    // Illegal int *const p3 = &i;
    // Illegal int &r2 = v2;
}