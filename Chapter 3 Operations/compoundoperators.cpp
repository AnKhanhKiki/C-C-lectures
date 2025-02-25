#include <iostream>

int main(int argc, char**argv){
    int value {5};
    value += 10;
    std::cout << "value = value + 10: " << value << std::endl;
    value /= 3;
    std::cout << "value = value / 3: " << value << std::endl;
    value *= 20;
    std::cout << "value = value * 20: " << value << std::endl;
    value %= 7;
    std::cout << "value = value % 7: " << value << std::endl;
    return 0; 
}