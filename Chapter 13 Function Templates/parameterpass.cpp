#include <iostream>

template <typename T> T value(T a, T b);
template <typename T> T reference(T& a, T& b);

int main(int argc, char**argv)
{
    double a {10.00};
    double b {11.00};

    // Original values
    std::cout << "Outside address: " << std::endl;
    std::cout << "&a: " << &a << std::endl;
    std::cout << "&b: " << &b << std::endl;

    // Pass by value
    std::cout << "Pass by value:" << std::endl;
    value(a,b);

    // Pass by reference
    std::cout << "Pass by reference:" << std::endl;
    reference(a, b);

    return 0;

}

// Pass by value
template <typename T> T value(T a, T b)
{
    std::cout << "Inside address: " << std::endl;
    std::cout << "&a: " << &a << std::endl;
    std::cout << "&b: " << &b << std::endl;
    return 0;
}

 // Pass by reference
template <typename T> T reference(T& a, T& b)
{
    std::cout << "Inside address: " << std::endl;
    std::cout << "&a: " << &a << std::endl;
    std::cout << "&b: " << &b << std::endl;
    return 0;
}