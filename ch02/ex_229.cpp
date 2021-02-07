int main(){
    // Illegal
    int i, *const cp;
    int *p1, *const p2;
    const int ic, &r = ic;
    const int *const p3;
    
    // Legal
    const int *p;
    i = ic;
    
    // Illegal
    p1 = p3;
    p1 = &ic;
    p3 = &ic;
    p2 = p1;
    ic = *p3;
}