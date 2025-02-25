#include <string>
#include <iostream>

#ifndef ACADEMICS_H
#define ACADEMICS_H

class academics
{
    private:
        std::string modules;
        size_t grade{};
    public:
        academics() = default;

        // Setters
        void set_module_name(std::string module_name)
        {
            modules = module_name;
        }
        void set_grade(size_t grades)
        {
            grade = grades;
        }

        // Getters
        std::string get_module_name()
        {
            std::cout << "Module: " << modules << std::endl;
            return modules;
        }
        size_t get_grade()
        {
            std::cout << "Grade: " << grade << std::endl;
            return grade;
        }
};

#endif