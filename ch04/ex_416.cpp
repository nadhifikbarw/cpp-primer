int *getPtr()
{
    static int val = 2;
    return &val;
}

int main()
{
    int i;
    bool p;
    if (p = getPtr() != 0)
    // Because assignment has the lowest precedence so (getPtr() != 0) is evaluated first returning bool
    // Assignment also always evaluate to true
    if (i = 1024);
    // Should be written
    if (i == 1024);
}