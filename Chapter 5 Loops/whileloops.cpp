#include <iostream>

int main(int argc, char**argv){
    int var;
    std::cout << "How many times do you want to print?" << std::endl;
    std::cin >> var;

    int i = 0;
    while(i < var){
        std::cout << "Print: " << ++i << std::endl;
    }
    return 0;
}