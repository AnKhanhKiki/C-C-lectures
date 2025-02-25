#include <iostream>
#include <string>

int main(int argc, char**argv)
{
    // Declare the functions
    void compare_aum(const int a,const int b, int& output); // Output by reference
    void compare_fund(const int a , const int b, int* result); // Output by pointer

    // Declare and initialise the variables
    int aum1{};
    int aum2{};
    std::string name1;
    std::string name2;
    int output{};
    int result{};

    // Prompt user inputs
    std::cout << "Enter hedge fund: ";
    std::getline(std::cin, name1);
    std::cout << "AUM: ";
    std::cin >> aum1;
    std::cin.ignore(); // Ignore the "enter" click that print an extra line

    std::cout << "Enter hedge fund: ";
    std::getline(std::cin, name2);
    std::cout << "AUM: ";
    std::cin >> aum2;

    // Calling the function
    compare_aum(aum1, aum2, output);
    std::cout << "Max fund AUM: " << output << std::endl;

    compare_fund(aum1, aum2, &result); // Argument of output must be a address
    if(result == 1)
    {
        std::cout << name1 << " has more capital than " << name2 << std::endl;
    }
    else if(result == -1)
    {
        std::cout << name2 << " has more capital than " << name1 << std::endl;
    }
    else
    {
        std::cout << name1 << " has the same capital as " << name2 << std::endl;
    }

    return 0;
}

// By reference
void compare_aum(const int a,const int b, int& output)
{
    if(a > b)
    {
        output = a;
    }
    else if (a < b)
    {
        output = b;
    }
    else
    {
        output = a;
    }
}


// By pointer: remember to dereference
void compare_fund(const int a , const int b, int* result)
{
    if(a > b)
    {
        *result = 1; // Dereference 
    }
    else if(a < b)
    {
        *result = -1;
    }
    else
    {
        *result = 0;
    }
}