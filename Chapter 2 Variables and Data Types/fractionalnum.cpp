#include <iostream>
#include <iomanip>

int main(int argc, char **argv){
    // Declare and initialise
    // Remember to include suffixes for float: f and long double: L
    float float_1 {1.1234567890123456789f}; // Size of float is 4 bytes and can only have 7 significant figures (Precision: 7)
    double double_1 {1.1234567890123456789}; // Size of double is 8 bytes and has precision of 15
    long double ldouble_1 {1.1234567890123456789L}; // Size of long double is 16 bytes

    // Set the precision
    std::cout << std::setprecision(20);

    std::cout << "Float: " << float_1 << ", size: " << sizeof(float_1) << std::endl;
    std::cout << "Double: " << double_1 << ", size: " << sizeof(double_1) << std::endl;
    std::cout << "Long Double: " << ldouble_1 << ", size: " << sizeof(ldouble_1) << std::endl;

    // Scientific notation
    double double_2 {101234567};
    double double_3 {1.01234567e8}; // e8 means multiply by 10^8
    double double_4 {1.0123e8};

    std::cout << "These are the same: " << std::endl;
    std::cout << double_2 << std::endl;
    std::cout << double_3 << std::endl;
    std::cout << double_4 << std::endl;

    // Infinity and NaN
    float x {11.0f};
    float y {};
    float z {};

    float inf_result = x / y;
    float NaN_result = y / z;

    std::cout << "Infinity: " << inf_result << std::endl;
    std::cout << "NaN: " << NaN_result << std:: endl;

    return 0;
}