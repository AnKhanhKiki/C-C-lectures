#include <iostream>
#include <string>


class Fund {
    private: // Member variables
    std::string name {"Monak Capital Management"};
    double aum {8.0};
    public:
    void fund_info() // function
    {
        std::cout << "Fund name: " << name << ", AUM: $" << aum << " billion."<< std::endl;
    }
};

class Academics {
    public: 
    std::string module_name {};
    int grade{};
    public:
    void print()
    {
        std::cout << "Module: " << module_name << ", grade: " << grade << "%." << std::endl;
    }
};

class Cuboid{
    public:
    double height{};
    double length1{};
    double length2{};
    public:
    double volume()
    {
        double volume = height * length1 * length2;
        return volume;
    }
    double surface_area()
    {
        double surface_area = (height * length1  + height * length2 + length1 * length2) * 2;
        return surface_area;
    }
};

int main(void)
{
    Fund fund1;
    fund1.fund_info();

    Academics thermo;
    thermo.module_name = "Thermodynamics";
    thermo.grade = 97;
    thermo.print();

    Cuboid cuboid1;
    cuboid1.height = 11.0;
    cuboid1.length1 = 12.0;
    cuboid1.length2 = 10.0;
    std::cout << "Volume of cuboid: " << cuboid1.volume() << std::endl;
    std::cout << "Surface area of cuboid: " << cuboid1.surface_area() << std::endl;
}

/*
Class allows you to create your own type.
Class declaration syntax: 
class class_name{
    public:
    type member_variable{};
    type member_variable{};
    public:
    return_type function_name()
    {
        function body;

    }
};

You can set the member variable or the function to be public or private to the general program. 
Member variables cannot be references, they can be values or pointers.
Class functions have access to member variables regardless of whether they are private or public. 
*/