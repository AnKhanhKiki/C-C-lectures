#include <iostream>
#include <string>

int main(void)
{
    std::string empty; //empty string
    std::cout << "empty: " << empty << std::endl;
    std::string hello {"Hello"};
    std::cout << "hello: " << hello << std::endl;
    std::string hello2 {hello}; // initialise with an existing string
    std::cout << "hello2: " << hello2 << std::endl;
    std::string ceo {"I'm CEO, bitch."};
    std::cout << "ceo: " << ceo << std::endl;
    std::string polite {ceo, 0, 7}; // initialise with an existing string starting from and ending at
    std::cout << "polite: " << polite << std::endl;
    std::string copy (10, 'b'); // initialise with multiple copies of a character
    std::cout << "copy: " << copy << std::endl;
}