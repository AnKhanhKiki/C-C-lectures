#include <iostream>

// Declaring a function: type of return, name of function, function parameters
void billions(long long aum)
    {
        if (aum >= 1000000000)
        {
            std::cout << "Welcome to the Billion Dollar Club." << std::endl;
        }
        else
        {
            std::cout << "Your AUM is not enough to enter." << std::endl;
        }
    }

int compare(double a, double b)
{
    if(a > b)
    {
        std::cout << a << " > " <<  b << std::endl;
    }
    else if(a < b)
    {
        std::cout << a << " < " <<  b << std::endl;
    }
    else
    {
        std::cout << a << " = " <<  b << std::endl;
    }
    return 0;
}

int main(int argc, char**argv)
{
    long long aum{};
    std::cout << "Enter your AUM: ";
    std::cin >> aum;

    // Calling a function: function name, arguments
    billions(aum);

    double num1{}, num2{};

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    compare(num1, num2);

    return 0;
}
