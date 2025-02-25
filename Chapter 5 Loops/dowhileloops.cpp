#include <iostream>

int main(int argc, char**argv){
    int var;
    std::cout << "How many times do you want to print?" << std::endl;
    std::cin >> var;

    int i = 0;
    if (var != 0){
        // do while loops: runs the action first then check the conditions after
        do
        {
            std::cout << "Print: " << ++i << std::endl;
        } while (i < var); // conditions checked
    }
    else
    {
        return 0;
    }
    
    return 0;
}