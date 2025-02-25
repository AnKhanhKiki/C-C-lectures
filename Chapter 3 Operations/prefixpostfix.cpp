#include <iostream>

int main(int argc, char**argv){
    // Postfix
    int value {10};
    std::cout << "Value: " << value++ << std::endl; // At the end of this line value = 10
    std::cout << "Value: " << value << std::endl; // At the end of this line value = 11
    // Prefix
    value = 10;
    std::cout << "Value: " << ++value << std::endl; // At the end of this line value = 11
    return 0;

    /* 
    Post-increment: i++ 
    original value is used then new value gets updated afterwards. 
    Pre-increment: ++i
    value gets updated before then it's used for operations.
    */
}