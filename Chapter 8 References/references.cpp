#include <iostream>

int main(int argc, char**argv)
{
    int num1 {30};
    int& ref_num1 {num1}; // Reference to num1

    std::cout << "num1: " << num1 << ", &num1: " << &num1 << std::endl;
    std::cout << "ref_num1: " << ref_num1 << " , &ref_num1: " << &ref_num1 << std::endl;

    double num2 {44.2};
    double& ref_num2 {num2}; // reference to num2

    std::cout << "num2: " << num2 << ", &num2: " << &num2 << std::endl;
    std::cout << "ref_num2: " << ref_num2 << " , &ref_num2: " << &ref_num2 << std::endl;

    // Modify the reference will modify the original value and vice versa
    ref_num1 = 70;
    std::cout << "num1: " << num1 << " = ref_num1: " << ref_num1 << std::endl;

    ref_num2 = 45;
    std::cout << "num2: " << num2 << " = ref_num2: " << ref_num2 << std::endl;

    return 0;   
}