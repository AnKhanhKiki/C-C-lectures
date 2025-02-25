#include <iostream>

int main(int argc, char**argv){
    int a;
    int b;
    std::cout << "Enter first number: " << std::endl;
    std::cin >> a;
    std::cout << "Enter second number: " << std::endl;
    std::cin >> b;

    int result = (a > b) ? a : b; // ternary operator

    std::cout << "Max: " << result << std::endl;
    return 0;

    /* 
    template: type name = (conditions) ? option1 : option2
    option 1 and option 2 must be of same type or of convertible types
    */
   /* 
   This is the same as:
   if(conditions == true):
        option 1;
    else:
        option 2;
   */
}