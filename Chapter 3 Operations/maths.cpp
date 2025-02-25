#include <iostream>
#include <cmath>

int main(int argc, char**argv) {
    // floor() : round down
    std::cout << "Rounded down: " << std::floor(1.23232) << std::endl;
    // ceil() : round up
    std::cout << "Rounded up: " << std::ceil(1.23232) << std::endl; 
    // round()
    std::cout << "Rounded: " << std::round(9.45454545) << std::endl;
    // exp() : exponential 
    int var {11};
    std::cout << "Exponential: " << std::exp(var) << std::endl;
    // log() : ln()
    std::cout << "ln(11): " << std::log(var) << std::endl;

    /* There are a lot of math functions you can find in cppreference. */

}