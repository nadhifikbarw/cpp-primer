#include <cstddef>

int main() {
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t ix = 1; ix < array_size; ++ix) //Fixed indexing error
    {
        ia[ix] = ix;
    }
}