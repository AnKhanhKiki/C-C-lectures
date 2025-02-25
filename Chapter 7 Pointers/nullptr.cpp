#include <iostream>

int main(int argc, char**argv)
{
    // Verbose pointer check
    int* pointer{};
    //pointer = new int{10};

    if(pointer == nullptr)
    {
        std::cout << "Invalid address." << std::endl;
    }
    else
    {
        std::cout << "Valid address, content: " << *pointer << std::endl; 
    }

    // This is the same as:
    if(pointer)
    {
        std::cout << "Valid address, content: " << *pointer << std::endl;
    }
    else
    {
        std::cout << "Invalid address." << std::endl; 
    }

    // You can delete a nullptr, it is safe. Just don't do it twice.
    delete pointer;
    pointer = nullptr;
    

    return 0;
}