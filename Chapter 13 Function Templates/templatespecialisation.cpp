#include <iostream>
#include <cstring>

template <typename T> T compare(T a, T b)
{
    return (a > b) ? a : b;
}

// Specialised function used to handle type const char*
template <>
const char* compare<const char*> (const char* a, const char* b)
{
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main(int argc, char**argv)
{
    int num1{};
    int num2{};
    std::cout << "Enter an integer: ";
    std::cin >> num1;
    std::cout << "Enter an integer: ";
    std::cin >> num2;

    std::cout << "Generic function: " << std::endl;
    std::cout << "Larger number: " << compare(num1, num2) << std::endl;

    const char* str1{"junk"};
    const char* str2{"junk"};

    std::cout << "Specialised function for char*: " << std::endl;
    std::cout << "Word that comes first lexicographically: " << compare(str1, str2) << std::endl;
    
}
