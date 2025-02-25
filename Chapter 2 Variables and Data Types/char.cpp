#include <iostream>

int main(int argc, char**argv){
    char character_1 {'H'}; // with ' '
    char character_2 {'e'};
    char character_3 {'l'};
    char character_4 {'l'};
    char character_5 {'o'};

    std::cout << character_1;
    std::cout << character_2;
    std::cout << character_3;
    std::cout << character_4;
    std::cout << character_5 << std::endl;

    // How to print a character out as an integer
    char value = 65;
    std::cout << value << std::endl;
    std::cout << static_cast<int>(value) << std::endl;

    char value_2 = 'A';
    std::cout << value_2 << std::endl;
    std::cout << "Size: " << sizeof(value_2) << std::endl; // Size of a char is 1 byte

    return 0;
}