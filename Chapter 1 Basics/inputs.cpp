#include <iostream>
#include <string>

int main(int argc, char ** agrv){
    int age;
    std::string name;
    std::cout << "Please enter your name and age: " << std::endl;
    /*
    std::cin >> name; // Storing input in the name variable
    std::cin >> age; // Storing input in the age variable
    // std::cin >> name >> age; will do the same thing
    */

    std::getline(std::cin, name); // Can get input with spaces.
    std::cin >> age;
    std::cout << "Your name is " << name << " and you are " << age << std::endl;
    return 0;
}

/* 
std::cin takes input data and store it. 
>> because data flows from terminal to program. 
*/
