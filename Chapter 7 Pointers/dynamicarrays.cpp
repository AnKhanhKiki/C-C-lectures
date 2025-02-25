#include <iostream>

int main(int argc, char**argv)
{
    size_t size{10};

    // Allocate a dynamic array on the heap
    int* p_array1{new(std::nothrow) int[size]};

    //delete syntax
    delete[] p_array1;
    p_array1 = nullptr;

    double* p_array2{new(std::nothrow) double[5]{1.,2.,3.,4., 5.}};

    // How to print out each element
    for(size_t i = 0; i < 5; i++)
    {
        std::cout << "p_array2[" << i << "]= " << p_array2[i] << " = " << *(p_array2 + i) << std::endl; 
    }
    delete[] p_array2;
    p_array2 = nullptr;

    std::cout << "-------------------" << std::endl;

    int* p_array3{new(std::nothrow) int[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};
    for(size_t i = 0; i < size; i++)
    {
        std::cout << "p_array3[" << i << "]= " << p_array3[i] << " = " << *(p_array3 + i) << std::endl; 
    }
    delete[] p_array3;
    p_array3 = nullptr;

    /*
    Dynamic vs Static array
    dynamic: heap
    static: stack
    dynamic: cannot do std::size
    static: can do std::size
    dynamic: cannot do range based for loop
    static: can do range based for loop
    for(auto element : static_array)
    {
        code
    }
    */

    return 0;
}