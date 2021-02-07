int main() {
    // Illegal
    const int buf;
    // legal
    int cnt = 0;
    // Legal
    const int sz = cnt;
    // Illegal for ++sz
    ++cnt; 
    // ++sz; 
}