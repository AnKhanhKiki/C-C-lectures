#include <iostream>

int main(void)
{
    // Capture lists allow lambda functions to access variables outside of its scope
    int a {10};
    int b {20};

    auto lamb1 = [a,b]()
    {
        return a + b;
    };

    std::cout << "lamb1: " << lamb1() << std::endl;

    // Capture by value: pass a copy of the variable into the capture list
    int x{11};

    auto lamb2 = [x]()
    {
        std::cout << "x(lambda function):" << x << std::endl; // Keep printing 11
    };

    for(size_t i = 0; i < 5; i++)
    {
        lamb2();
        std::cout << "x(outer function): " << x++ << std::endl; // Print 11, 12, 13, 14, 15
    }

    std::cout << "----------------------" << std::endl;

    // Capture by reference: pass the actual value of the variable
    int y{11};

    auto lamb3 = [&y]()
    {
        std::cout << "y(lambda function):" << y << std::endl; // Print 11, 12, 13, 14, 15
    };

    for(size_t i = 0; i < 5; i++)
    {
        lamb3();
        std::cout << "y(outer function): " << y++ << std::endl; //Print 11, 12, 13, 14, 15
    }

}