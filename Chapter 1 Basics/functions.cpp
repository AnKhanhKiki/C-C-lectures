#include <iostream>

int multiplication(int first_param, int second_param){
    int multiply = first_param * second_param;
    return multiply;
}

int main(int agrc, char ** argv){
    int first_number {10};
    int second_number {11};
    std::cout << "The product is: " << multiplication(first_number,second_number) << std::endl;
    return 0;
}