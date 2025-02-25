#include <iostream>

int main(int argc, char**argv)
{
    // Initialise a single char pointer
    char* p_character {nullptr};
    char character {'A'};
    p_character = &character;

    std::cout << "character: " << *p_character << std::endl;

    // Declare and initialise a whole string of char
    const char* message {"Hello World!"}; // Be aware of the syntax 
    std::cout << "message: " << message << std::endl; // This is not dereferencing. It is a special case for char pointers.

    // Dereferencing of the whole string of char will give you the first char
    std::cout << "dereferencing: " << *message << std::endl;

    // To change any string of char, you should initialise it as an array
    char array_message[] {"Whats upp"};

    std::cout << "array_message original: " << array_message << std::endl;

    array_message[8] = '!'; //Modification

    std::cout << "array_message modified: " << array_message << std::endl; 

    return 0;
}