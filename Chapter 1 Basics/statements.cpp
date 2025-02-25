#include <iostream>

int addNumbers(int first_number, int second_number){
    int sum = first_number + second_number;
    return sum;
}

int main(int argc, char ** argv){
    int first_number {11};     // The same as int first_number = 11
    int second_number {10};
    int sum = addNumbers(first_number, second_number);
    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The sum is: " << addNumbers(11,12) << std::endl;
    return 0;
}

/*
A statement is basically a line in your program, it usually ends with ";". 
Functions take in inputs and produce outputs. 
A function must be defined before it can be used. 
How to define a function: int main(int argc, char ** argv){   }
int: type of function
main: name of function
int argc, char ** argv: parameters of the function
{   }: content of the function
*/