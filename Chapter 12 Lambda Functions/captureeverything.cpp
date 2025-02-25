#include <iostream>
#include <string>

int main(void)
{
    int x{10};
    double y{11.23};
    std::string str {"LTCM"};

    // Capture everything by value
    auto lamb_val = [=]()
    {
        std::cout << "x : " << x << std::endl;
        std::cout << "y : " << y << std::endl;
        std::cout << "string: " << str << std::endl;
    };

    for(size_t i = 0; i < 5; i++)
    {
        std::cout << "Iteration number " << i+1 << std::endl;
        lamb_val();
        x++;
        y++;
    }

    std::cout << "-----------------------" << std::endl;

    // Capture everything by reference
    auto lamb_ref = [&]()
    {
        std::cout << "x : " << x << std::endl;
        std::cout << "y : " << y << std::endl;
        std::cout << "string: " << str << std::endl;
    };

    for(size_t i = 0; i < 5; i++)
    {
        std::cout << "Iteration number " << i+1 << std::endl;
        lamb_ref();
        x++;
        y++;
    }

}