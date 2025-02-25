#include <iostream>
#include <string>

int main(int argc, char**argv)
{
    // Declaring a lambda function
    auto lamb1 = []()
    {
        std::cout << "This is Lambda function no.1" << std::endl;
    };

    // Calling the lambda function
    lamb1();

    // But you can declare then call it simultaneously without giving it a name
    []()
    {
        std::cout << "This is Lambda function no.2" << std::endl;
    }();

    // You can pass some parameters to it
    auto lamb3 = [](int a)
    {
        std::cout << "This is lambda function no." << a << std::endl;
    };

    lamb3(3);

    // Or 
    [](int a)
    {
        std::cout << "This is lambda function no." << a << std::endl;
    }(4);

    // You can specify the return type as well
    auto lamb5 = [](std::string str1, std::string str2) -> std::string // Specify return type
    {
        std::string result = str1 + str2;
        return result;
    };

    std::string string1 {"This is lambda "};
    std::string string2 {"function no.5"};

    std::cout << lamb5(string1, string2) << std::endl;

}

/*
Lambda function syntax

To declare it:
auto handle_name = [capture lists](parameters) -> return type
{
    function body;
};

To call it:
handle_name(arguments);

*/