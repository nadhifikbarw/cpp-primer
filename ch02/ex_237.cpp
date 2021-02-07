int main() {
    int a = 3, b = 4;
    decltype(a) c = a; // int
    decltype(a = b) d = a; // int ref since a is int, so d is int ref to a;
}