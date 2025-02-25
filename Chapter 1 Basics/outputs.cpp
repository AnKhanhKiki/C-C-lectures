#include <iostream>

int main(int argc, char ** argv){
    int number;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;
    std::cout << number << std::endl;

    std::cerr << "Error Warning: " << std::endl;

    std::clog << "Log Message: " << std::endl;

    return 0;
}

/*
std::cout : produce outputs
std::cerr : produce error
std::clog : produce a log
<< because data flows from program out to terminal
*/