#include <iostream>

int main(int argc, char**argv)
{
    int num {12};
    int& ref_num {num}; // Reference to num
    int* p_num {&num}; // Pointer to num

    // Reading
    std::cout << "ref_num: " << ref_num << std::endl;
    std::cout << "p_num: " << *p_num << std::endl;

    // Writing
    // Pointer
    *p_num = 30;
    std::cout << "num: " << num << std::endl;
    std::cout << "p_num: " << *p_num << std::endl;
    std::cout << "*p_num (original): " << p_num << std::endl;

    // Reference
    ref_num = 12;
    std::cout << "num: " << num << std::endl;
    std::cout << "ref_num: " << ref_num << std::endl;

    // You cannot make reference to refer to some other variable
    int new_num = 40; // new variable
    ref_num = new_num; // trying to make reference to refer to new variable
    // This will change num as well
    std::cout << "num: " << num << std::endl;

    // But you can make a pointer change it address
    p_num = &new_num;
    std::cout << "p_num: " << *p_num << std::endl;
    std::cout << "*p_num (new): " << p_num << std::endl;

    return 0;
}