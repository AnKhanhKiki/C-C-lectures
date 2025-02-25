#include <iostream>

int main(int argc, char **argv){
    // Braced initialisation
    int var_0; // If the value of a variable is uninitialised, the compiler will give it a garbage value.
    int var_1 {1};
    int var_2 {2};
    int sum {var_1 + var_2};

    std::cout << "Variable 0: " << var_0 << std::endl;
    std::cout << "Variable 1: " << var_1 << std::endl;
    std::cout << "Variable 2: " << var_2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    // Functional initialisation
    int var_3 (3);
    int var_4 (4.5); // 4.5 is a float but it is initialised as an integer. Functional initialisation will automatically drop it fractional value.

    std::cout << "Variable 3: " << var_3 << std::endl;
    std::cout << "Variable 4: " << var_4 << std::endl;

    // Assignment initialisation
    int var_5 = 5;
    int sum_2 = var_1 + var_5;

    std::cout << "Variable 5: " << var_5 << std::endl;
    std::cout << "Sum 2: " << sum_2 << std::endl;

    // Size of integer is 4 bytes (32 bits)
    std::cout << "Size of integer: " << sizeof(var_1) << std::endl;

    // Signed or unsigned
    signed int signed_int {-11};
    unsigned int unsigned_int {11};

    std::cout << "Signed Interger: " << signed_int << ", size: " << sizeof(signed_int) << std::endl;
    std::cout << "Unsigned Interger: " << unsigned_int << ", size: " << sizeof(unsigned_int) << std::endl;

    // Short is 2 bytes
    short signed int ssi {-3000};
    short unsigned int sui {3000};

    std::cout << "Short signed Interger: " << ssi << ", size: " << sizeof(ssi) << std::endl;
    std::cout << "Short unsigned Interger: " << sui << ", size: " << sizeof(sui) << std::endl;

    // Long is 4 or 8 bytes
    long signed int lsi {-1};
    long unsigned int lui {1};

    std::cout << "Long signed Interger: " << lsi << ", size: " << sizeof(lsi) << std::endl;
    std::cout << "Long unsigned Interger: " << lui << ", size: " << sizeof(lui) << std::endl;

    // Long Long is 8 bytes
    long long signed int llsi {-11};
    long long unsigned int llui {11};

    std::cout << "Long long signed Interger: " << llsi << ", size: " << sizeof(llsi) << std::endl;
    std::cout << "Long long unsigned Interger: " << llui << ", size: " << sizeof(llui) << std::endl;

    return 0;
}