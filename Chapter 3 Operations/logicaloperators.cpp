#include <iostream>

int main(int argc, char**argv){
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;

    // AND operator &&
    std::cout << "a AND b: " << (a && b) << std::endl;
    std::cout << "a AND b AND c: " << (a && b &&c) << std::endl;
    
    // OR operator ||
    std::cout << "a OR b: " << (a || b) << std::endl;
    std::cout << "a OR b OR c: " << (a || b ||c) << std::endl;

    // NOT operator !
    std::cout << "NOT (a AND b) AND c: " << (!(a && b) && c) << std::endl;
    std::cout << "NOT (a OR b) OR c: " << (!(a || b) || c) << std::endl;

    // Logical operators combined with Relational operators
    int value1 {1};
    int value2 {2};

    std::cout << "(1 > 2) AND b: " << ((1 > 2) && b) << std::endl;
    std::cout << "NOT (1 > 2) OR b AND c: " << (!(1 > 2) || b && c) << std::endl;
    
    return 0;
}