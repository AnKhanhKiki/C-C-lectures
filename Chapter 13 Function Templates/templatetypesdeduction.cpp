#include <iostream>
#include <string>

template <typename T> T multiply(T a, T b);

int main(int argc, char**argv)
{
    int num1{12};
    int num2{13};
    double num3{44.42};
    double num4{34.57};
    std::string str1 {"Billion "};
    std::string str2 {"Dollars"};

    auto product = multiply<double> (num1, num3); // Specify the type used inside the function 
    std::cout << "multiply<double>: " << product << std::endl;

    auto product2 = multiply<int> (num1, num3);
    std::cout << "multiply<int>: " << product2 << std::endl;

    // This is possible because of implicit conversion since int can be converted to a double and vice versa.
    // But this won't work: auto product3 = multiply<int> (num1, str1); since there is no conversion between string and integer

}

template <typename T> T multiply(T a, T b)
{
    return a * b;
}