#include <iostream>
#include <string>
#include "arguments.h"

int main(int argc, char**argv)
{
    struct manager
    {
        std::string name {};
        int aum {};
        manager(std::string n, int a) : name(n), aum(a) {}
    };


    std::string name1;
    int aum1;

    std::cout << "Hedge fund: ";
    std::cin >> name1;
    std::cout << "AUM: ";
    std::cin >> aum1;

    manager manager1(name1, aum1);

    std::string name2;
    int aum2;

    std::cout << "Hedge fund: ";
    std::cin >> name2;
    std::cout << "AUM: ";
    std::cin >> aum2;

    manager manager2(name2, aum2);

    int result = compare_funds(aum1, aum2);

    if(result == 1)
    {
        std::cout << name1 << " has more capital than " << name2 << std::endl;
    }
    else if(result == -1)
    {
        std::cout << name2 << " has more capital than " << name1 << std::endl;
    }
    else
    {
        std::cout << name1 << " has the same capital as " << name2 << std::endl;
    }


    // EXAMPLE 
    int result2 = incr_mult(4,5);
    std::cout << "Result2: " << result2 << std::endl;

    return 0;
}