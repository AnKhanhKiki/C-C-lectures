#include <iostream>

int main(int argc, char**argv){
    // Variables initialisation
    int var_1 {110};
    int var_2 {11};
    float var_3 {1.1f};
    int var_4 {12};

    //Addition
    auto addition = var_1 + var_3;
    std::cout << "Addition = " << addition << std::endl;

    // Multiplication
    auto product = var_2 * var_3;
    std::cout << "Product = " << product << std::endl;

    // Division
    auto division = var_2 / var_3;
    std::cout << "Division = " << division << std::endl;

    // Quotient
    auto quotient = var_1 % var_4;
    std::cout << "Quotient = " << quotient << std::endl;
    return 0;
}