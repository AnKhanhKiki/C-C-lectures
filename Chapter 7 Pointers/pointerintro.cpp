#include <iostream>

int main(int argc, char**argv)
{
    // Declare and initialise a pointer
    int *p_number {}; // will initialise to nullptr
    double *p_double {nullptr};

    // POINTER CAN ONLY STORE VARIABLE OF THE SAME TYPE

    // Size of pointers
    std::cout << "Size of int pointer:" << sizeof(p_number) << std::endl;
    std::cout << "Size of int double: " << sizeof(p_double) << std::endl;

    // Initialise pointers and assign them data
    int var {11};
    int *p_var {&var}; // & is the address operator

    std::cout << "Variable: " << var << std::endl;
    std::cout << "Address of var: " << p_var << std::endl;

    // You can change the address of stored in the pointer 
    int new_var {12};
    p_var = &new_var;

    std::cout << "New variable: " << new_var << std::endl;
    std::cout << "Address of new_var: " << p_var << std::endl;

    // Dereferencing a pointer: reading the value in the address that the pointer points to
    int* p_num {nullptr};
    int num {100};
    p_num = &num;

    std::cout << "num = " << *p_num << std::endl;

    return 0;
}