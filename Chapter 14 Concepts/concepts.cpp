#include <iostream>
#include <concepts>

// Concepts in C++20 are a way to constrain template parameters.

// Syntax 1
template <typename T>
requires std::integral<T>  // This applies a constraint on T
void function(T a, T b)   // Specify return type (void)
{
    std::cout << "Function runs well." << std::endl;
}

int main(void)
{
    int a {1};
    int b {2};
    function(a,b);  // This works because 'int' is integral.
    return 0;
}
