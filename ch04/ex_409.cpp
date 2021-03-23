const char *cp = "Hello World";
int main()
{
    if (cp && *cp)
    {
    };
}

// CP is pointer of const char -> not nullptr -> true
// *cp would be 'H' -> nonzero -> true