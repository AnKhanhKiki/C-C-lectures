#include <iostream>
#include <string>
#include "academics.h"

int main(void)
{
    size_t number_of_modules{};

    std::cout << "Enter number of modules: ";
    std::cin >> number_of_modules;

    int size = number_of_modules;
    int sum_grade{};

    for(size_t i = 0; i < number_of_modules; i++)
    {
        size_t grade_array[6] {};
        {
            std::string module_name;
            size_t grades{};
            std::cout << "Name of module: ";
            std::cin >> module_name;
            std::cout << "Grade: ";
            std::cin >> grades;

            academics module;
            module.set_module_name(module_name);
            module.set_grade(grades);
            module.get_module_name();
            module.get_grade();

            grade_array[i] = grades;
            sum_grade += grades;
        }
    }  

    std::cout << "Overall: " << sum_grade / number_of_modules << std::endl;

    return 0;
}

/* 
You can have the class and constants in one file and the main function in another
*/