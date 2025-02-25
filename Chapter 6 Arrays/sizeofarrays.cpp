#include <iostream>

int main(int argc, char**argv)
{
    // No size array
    int array[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(auto element : array)
    {
        std::cout << "array[" << (--element) << "] = " << element << std::endl; 
    }

    std::cout << "-----------------" << std::endl;

    int array2[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    for(int i = 0; i < std::size(array2); i++)
    {
        std::cout << "array2[" << i << "] = " << array2[i] << std::endl;
    }
    // std::size()
    std::cout << "Size of array2: " << std::size(array2) << std::endl;

    std::cout << "-----------------" << std::endl;
    
    // Before C++17
    int array3[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    int size = sizeof(array3) / sizeof(array3[0]);
    std::cout << "Size of array3: " << size << std::endl;
}