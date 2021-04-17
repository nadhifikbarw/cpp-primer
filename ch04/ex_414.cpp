int main()
{
    int i;
    // if (42 = i); // 42 is not lvalue
    if (i = 42); // expression return lvalue i; // consider this example (i+i)++ === (i = i + i + 1)
}