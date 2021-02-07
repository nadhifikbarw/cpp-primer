#include <iostream>
#define log(x) std::cout << x << std::endl
#define logmem(x) std::cout << &x << std::endl

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

    // Should be the same
    logmem(i); logmem(r);

    // Should be the same but different from i
    logmem(ci); logmem(cr);

    // New copy of the variable dropped the reference
    logmem(a);

    // New copy of the variable, dropped the const
    logmem(b);
    
    // New copy of the variable, dropped the reference and const
    logmem(c);

    // New int pointer variable that has value of i address
    logmem(d);

    // New const int pointer variable that has value of ci address
    logmem(e);

    // New const int variable that has value = ci
    logmem(f);

    // Reference to ci
    logmem(g);
    
    // Reference to temp variable
    logmem(j);
    
    // New variable typed int, value equal i 
    logmem(k);

    // Reference to i
    logmem(l);

    // Reference to ci (const int)
    logmem(m);

    // New variable pointer to ci (const int pointer)
    logmem(p);

    // Will affect only a since new var
    a = 42;
    // Will affect only b since new var
    b = 42;
    // Will affect only c since new var
    c = 42;
    // Illegal, because type: int pointer
    // d = 42;

    // Illegal, because type: const int pointer
    // e = 42;

    // Illegal, because g is reference to const int type
    // g = 42;
}