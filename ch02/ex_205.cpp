#include <iostream>

int main() {
    return 0;
}

// Exercise (A) - prefix available for character & string literal:
// 'a' is literal for type char (8-bit)
// L'a' is literal for type wchar_t (Word atleast 2 bytes, platform dependant)
// u'a' is literal for type char16_t (16-bit)
// U'a' is literal for type char32_t (32-bit)

// Extra STRING LITERAL ONLY?:
// https://stackoverflow.com/questions/23471935/how-are-u8-literals-supposed-to-work
// u8"a"" is STRING literal only for type char (8-bit)

// Exercise(B)
// 10 is literal for type int (at least 16 bit, usually 32)
// 10u is literal for type int unsigned (at least 16 bit, usually 32)
// 10L is litral for type long (at least 32, usually 64)
// 10uL is litral for type unsigned long (at least 32, usually 64)
// 012 is literal of value: 20 in base 10, bcs it's int started with 0 it's octal
// 0xc is literal of value: 12 in base 10, bcs it's int started with 0x it's hex

// Exercise C
// 3.14 is literal for double (double precision) min: 32 bit
// 3.14f is literal for single-point precision (float) min: 64bit
// 3.14L is literal for long double (extended precision point) min: ?

// Exercise D
// 10 is literal for type int (at least 16 bit, usually 32)
// 10u is literal for type int unsigned (at least 16 bit, usually 32)
// 10. is literal for type double
// 10e-2 is literal for type double 