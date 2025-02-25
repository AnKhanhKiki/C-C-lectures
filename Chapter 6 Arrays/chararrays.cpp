#include <iostream>

int main(int argc, char**argv)
{
    // Declare a character array
    char string[6] {'H', 'E', 'L', 'L', 'O', '\0'}; // Needs to have '\0' to terminate the string properly
    
    //print by for loop
    std::cout << "string: ";
    for(auto character : string)
    {
        std::cout << character;
    };
    std::cout << std::endl;

    // Change characters in array
    string[0] = 'B';

    // Print 
    std::cout << "string: " << string << std::endl;

    // Omit size
    char string1[] {'Y', 'o', ' ', 'P', 'i', 'e', 'r', 'r', 'e', '\0'};
    std::cout << "string1: " << string1 << std::endl;
    std::cout << "Size of string1: " << sizeof(string1) << std::endl;

    // Declare the whole string
    char string2[] {"Hello World!"};
    std::cout << "string2: " << string2 << std::endl;
    std::cout << "Size of string2: " << sizeof(string2) << std::endl; // 13 because compiler autofills with '\0' to terminate the string

    return 0;
}