#include <iostream>
#include <limits>

int main(int argc, char**argv){
    // Unsigned int limits
    std::cout << "Numeric limits of unsigned integers are from: " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;

    // Signed int limits
    std::cout << "Numeric limits of signed integers are from: " << std::numeric_limits<signed int>::min() << " to " << std::numeric_limits<signed int>::max() << std::endl;

    // Short int
    std::cout << "Numeric limits of short integers are from: " << std::numeric_limits<short int>::min() << " to " << std::numeric_limits<short int>::max() << std::endl;

    // Floats
    std::cout << "Numeric limits of floats are from: " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << std::endl;

    // Doubles
    std::cout << "Numeric limits of doubles are from: " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() << std::endl;

    // Long doubles
    std::cout << "Numeric limits of long doubles are from: " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() << std::endl;

    /*
    min(): smallest positive value(except for signed integers)
    lowest(): most negative value
    min() is not 0 for floating points! It's the smallest positive normal value. like very small. 
    */

    return 0;

}