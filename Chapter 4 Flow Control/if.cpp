#include <iostream>

int main(int argc, char**argv){
    int var1 { };
    int var2 { };
    std::cout << "Enter first number: " << std::endl;
    std::cin >> var1;
    std::cout << "Enter second number: " << std::endl;
    std::cin >> var2;

    bool result {};
    std::cout << std::boolalpha;
    if(var1 > var2)
    {
        result = false;
        std::cout << "Result: " << result << std::endl;
    }
    else if (var1 < var2)
    {
        result = true;
        std::cout << "Result: " << result << std::endl;
    }
    else
    {
        std::cout << "Result: equals" << std::endl;
        return 0;
    }
    
    if(result == true)
    {
        std::cout << "Number 1 < Number 2" << std::endl;
    }
    else
    {
        std::cout << "Number 1 > Number 2" << std::endl;
    }

    return 0;
}