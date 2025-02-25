#include <iostream>

int main(int argc, char**argv){
    int number1 {1};
    int number2 {2};

    // Basic comparisons 
    std::cout << std::boolalpha;
    std::cout << "1 > 2: " << (number1 > number2) << std::endl;
    std::cout << "1 < 2: " << (number1 < number2) << std::endl;
    std::cout << "1 <= 2: " << (number1 <= number2) << std::endl;
    std::cout << "1 >= 2: " << (number1 >= number2) << std::endl;
    std::cout << "1 = 2: " << (number1 == number2) << std::endl;
    std::cout << "1 != 2: " << (number1 != number2) << std::endl;

    // You can store the boolean value as a variable
    bool result = (number1 == number2);
    std::cout << "Result:" << result << std::endl;
    
    return 0;
}