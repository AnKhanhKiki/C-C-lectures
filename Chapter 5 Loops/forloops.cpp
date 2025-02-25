#include <iostream>

int main(int argc, char**argv){
    int num {};
    std::cout << "How many times do you want to print?" << std::endl;
    std::cin >> num;

    // For loop
    for(int i = 0; i < num; i++){
        std::cout << "I love C++" << std::endl;
    }

    int var {};
    std::cout << "How many times do you want to print?" << std::endl;
    std::cin >> var;

    //For loop
    for(size_t i {}; i < var; i++) // use size_t 
    { 
        std::cout << "Hello World!" << std::endl;
    }

    return 0;
}