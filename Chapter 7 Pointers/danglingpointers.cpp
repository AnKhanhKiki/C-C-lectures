#include <iostream>

int main(int argc, char**argv)
{
    // Case 1: uninitialised pointer
    /*
    int* pointer1;

    std::cout << "pointer1: " << *pointer1 << std::endl; // CRASH!
    */

    // ALWAYS INITIALISE YOUR POINTERS!!! (to a value or nullptr)

    // Solution 1: checks if pointer is valid for use
    int* pointer5 {nullptr};
    int* pointer6 {new int {42}};

    if (pointer5 != nullptr)
    {
        std::cout << "pointer5: " << *pointer5 << std::endl;
    }
    else
    {
        std::cout << "Invalid address." << std::endl;
    }
    
    if (pointer6 != nullptr)
    {
        std::cout << "pointer6:" << *pointer6 << std::endl;
    }
    else
    {
        std::cout << "Invalid address." << std::endl;
    }

    delete pointer5;
    pointer5 = nullptr;

    delete pointer6;
    pointer6 = nullptr;

    //Case 2: using a deleted pointer
    /*
    int* pointer2 {new int {100}};

    std::cout << "pointer2: " << *pointer2 << std:endl; // Works fine

    delete pointer2;
    pointer2 = nullptr;

    std::cout << "pointer2: " << *pointer2 << std::endl; // CRASH!
    */

    // Solution 2: set pointer to nullptr after using it

    // Case 3: multiple pointers pointing at the same address
    int* pointer3 {new int {100}}; // Master pointer
    int* pointer4 {pointer3}; // Slave pointer

    std::cout << "pointer3: " << *pointer3 << std::endl;
    std::cout << "pointer4: " << *pointer4 << std::endl;

    delete pointer3;
    pointer3 = nullptr;

    /*
    No need to delete pointer 4 since both pointer 3 and 4 point to the same address
    delete pointer4; // CRASH!
    */
    pointer4 =nullptr;

    // Solution 3: checks if master pointer is valid. Only use slave pointer if master pointer is valid.
    if(!(pointer3 == nullptr))
    {
        std::cout << "pointer4: " << *pointer3 << std::endl;
    }
    else
    {
        std::cout << "Invalid address." << std::endl;
    }

    return 0;
}