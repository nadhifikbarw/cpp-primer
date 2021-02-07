#include <iostream>
#define log(x) std::cout << x << std::endl

int main() {
    auto  i = 0, &r = i;
    const int ci = i, &cr = ci;

    auto a = r;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    // auto &h = 42; ERROR
    const auto &j = 42;
    // Same as
    // const auto temp = 42;
    // const auto &j = temp;
    auto k = ci, &l = i;
    auto &m = ci, *p = &ci;

    // Illegal because auto can only deduce one type and *p2 should be pointer to const int
    // auto &n = i, *p2 = &ci;

    log(a);
    // Will affect only a since new var
    a = 42;
    log(a);
    // Will affect only b since new var
    log(b);
    b = 42;
    log(b);
    // Will affect only c since new var
    log(c);
    c = 42;
    log(c);
    
    // Illegal, because type: int pointer
    // d = 42;

    // Illegal, because type: const int pointer
    // e = 42;

    // Illegal, because g is reference to const int type
    // g = 42;
}