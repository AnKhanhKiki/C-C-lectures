#include <iostream>

int main(int argc, char**argv)
{
    // Dynamically allocate memory to the heap
    int* pointer {nullptr}; // initialised to 0
    pointer = new int; // Dynamically allocate memory on the heap for an integer = 4 bytes
    *pointer = 100; // Write into that dynamically allocated memory

    std::cout << "Dynamically allocated integer: " << *pointer << std::endl;

    /*
    Memory allocated on the heap is available for usage until released.
    Therefore, any memory that was dynamically allocated should be released afterwards. 
    This is different compared to memory allocated on the stack which is based on the scope of usage. 
    */

    // Memory allocated on the stack
    {
        int var {1}; // On the stack
    } // var is no longer available after this because it's out of scope

    // To release memory on the heap
    delete pointer;
    pointer = nullptr;

    // Declare and initialise pointers
    int* pointer2 {new int}; // Junk value allocated on the heap
    int* pointer3 {new int(22)}; // 22 allocated on the heap
    int* pointer4 {new int {23}}; // 23 allocated on the heap

    std::cout << "pointer2: " << *pointer2 << " (junk value)" << std::endl;
    std::cout << "pointer3: " << *pointer3 << std::endl;
    std::cout << "pointer4: " << *pointer4 << std::endl;
    
    // Free the memory
    delete pointer2;
    pointer2 = nullptr;
    delete pointer3;
    pointer3 = nullptr;
    delete pointer4;
    pointer4 = nullptr;

    // After being released, the pointers can still be reused
    pointer2 = new int {22};

    std::cout << "pointer2 reused: " << *pointer2 << std::endl;

    // Free it again
    delete pointer2;
    pointer2 = nullptr;
    
    return 0;
}