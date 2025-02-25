#include <iostream>

// prototype
int bryan(int num);

int main(int argc, char**argv)
{
    int num{};
    std::cout << "How many times you want to print?";
    std::cin >> num;

    bryan(num);

    return 0;
}

// You cannot define a function inside another function
int bryan(int num)
{
    for(size_t i = 0; i < num; i++)
    {
        std::cout << "Bryan is a lovely mf." << std::endl;
    }

    return 0;
}