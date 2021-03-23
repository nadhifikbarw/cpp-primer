#include <iostream>

int main()
{
    char arr1[] = "Hello";
    char arr2[] = "World";
    char arr3[sizeof(arr1) + sizeof(arr2)];
    strcpy(arr3, arr1);
    strcat(arr3, " ");
    strcat(arr3, arr2);

    std::cout << arr3 << std::endl;
}