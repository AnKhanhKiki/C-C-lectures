#include <iostream>

int main(int argc, char**argv){
    // char: 1 byte
    char var1 {23}; // size: 1
    char var2 {48}; // size: 1

    auto sum = var1 + var2; // size: 4
    std::cout << "Sum: " << sum << ", size: " << sizeof(sum) << std::endl;

    // short int: 2 bytes
    short int var3 {14}; // size: 2
    short int var4 {77}; // size: 2

    auto sum2 = var3 + var4; // size 4
    std::cout << "Sum: " << sum2 << ", size: " << sizeof(sum2) << std::endl;

    // The compiler is smart enough to change the types of the variables before doing arithmetic operations with them.
    return 0;

}