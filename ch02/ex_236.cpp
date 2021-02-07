int main() {
    int a = 3, b = 4; // int
    decltype(a) c = a; // Int
    decltype((b)) d = b; // Int ref
    ++c;
    ++d;
}