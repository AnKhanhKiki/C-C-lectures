#include <iostream>
#include <string>

template <typename T> T addition(T x, T y);
template <typename A> A maximum(A a, A b);

int main(int argc, char**argv)
{
    int num1 {100};
    int num2 {700};
    double num3 {12.47};
    double num4 {47.65};
    std::string str1 {"Tiger "};
    std::string str2 {"Cubs"};

    std::cout << "For integers: " << addition(num1, num2) << std::endl;
    std::cout << "For doubles: " << addition(num3, num4) << std::endl;
    std::cout << "For strings: " << addition(str1, str2) << std::endl;

    std::cout << "For integers: " << maximum(num1, num2) << std::endl;
    std::cout << "For doubles: " << maximum(num3, num4) << std::endl;
    std::cout << "For strings: " << maximum(std::size(str1),std::size(str2)) << std::endl;


    return 0;
}

template <typename T> T addition(T x, T y)
{
    T result = x + y;
    return result;
}

template <typename A> A maximum(A a, A b)
{
    return (a > b)? a : b;
}

/*
Function templates allow you to create a function that works with a wide variety of types, provided that the parameters follow the constraints that you defined. 
By default, a function template ensures that all template parameters represent the same type unless explicitly specified otherwise. 

syntax:
template <typename T> T function_name(T parameter1, T parameter2)
{
    function body;
}
*/