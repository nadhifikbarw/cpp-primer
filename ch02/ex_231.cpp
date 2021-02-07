int main() {
    int i =0;
    const int v2 = 0;
    int v1 = v2;

    int *p1 = &v1;
    int &r1 = v1;

    const int *p2 = &v2;
    int *const p3 = &i; // Illegal
    
    r1 = v2; // This also change v1
    // p1 = p2; Illegal because not address
    p2 = p1; // Legal because address
    p1 = p3; // Illegal and fail earlier
    p2 = p3; // LEgal because address 
}