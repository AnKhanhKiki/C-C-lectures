#include <iostream>
#include <string>

int func1(int x, int y);
std::string func2(std::string string1, std::string string2);

int main(int argc, char**argv)
{
    int a{10};
    int b{100};

    std::string c{"Hello, "};
    std::string d{"how are you?"};

    // By default, functions use copy of output. Therefore, the addresses of the results inside and outside of the function are different 
    int result1 = func1(a, b);
    std::cout << "Func1: " << result1 << " , Address: " << &result1 << std::endl;

    // But in some cases, functions use reference of output. In that case, the addresses will be the same.
    std::string result2 = func2(c, d);
    std::cout << "Func2: " << result2 << " , Address: " << &result2 << std::endl; 
}

int func1(int x, int y)
{
    int result1 = x + y;
    std::cout << "result1: " << result1 << " , Address: " << &result1 << std::endl;
    return result1;
}

std::string func2(std::string string1, std::string string2)
{
    std::string result2 = string1 + string2;
    std::cout << "result2: " << result2 << " , Address: " << &result2 << std::endl;
    return result2;
}