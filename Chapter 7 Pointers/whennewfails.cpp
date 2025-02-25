#include <iostream>

int main(int argc, char**argv)
{
    /*
    You cannot allocate too much memory on the heap
    int* data {new int[1000000000000]}; // Array of 1000000000000000 numbers
    new won't work in this case
    */

    // Solution 1: exception mechanism
    try
    {
       int* data = new int[10000000000];
    }
    catch(const std::exception& e)
    {
        std::cerr << "Found exception: " << e.what() << std::endl;
    }

    // Solution 2: std::nothrow
    int* data = new(std::nothrow) int[1000000000000]; // data = nullptr if new fails.
    if(data == nullptr)
    {
        std::cout << "Couldn't allocate memory." << std::endl;
    }
    else
    {
        std::cout << "Memory allocated successfully." << std::endl;
    }
    
    return 0;
}