#include <iostream>

int main(int argc, char**argv)
{
    /*
    int* pointer {new int{12}}; // memory on the heap

    // Should reset and delete it here

    int number {11}; // stack variable

    pointer = &number; // memory leak happens here as the program lost access to 12.

    delete pointer;
    pointer = nullptr;
    */

    /*
    {
        int* pointer{new int {10}}; // In scope
        //Should reset and delete it here
    }
    // Memory leaked as pointer stays inside scope
    */

    return 0;
}