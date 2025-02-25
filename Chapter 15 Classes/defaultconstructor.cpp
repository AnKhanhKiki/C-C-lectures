#include <iostream>

double pi = 3.14;

class Cylinder
{
    private:
        double height {0};
        double radius {0};
    public:
        Cylinder() = default; // without this, you cannot get a default cylinder
        Cylinder(double h, double r)
        {
            height = h;
            radius = r;
        }
    public:
        double volume()
        {
            double V = pi * radius * radius * height;
            return V; 
        }
        double surface_area()
        {
            double A = height * 2 * pi * radius;
            return A;
        }
        void print()
        {
            std::cout << "height: " << height << ", radius: " << radius << std::endl;
        }
};

int main(void)
{
    std::cout << "Default cylinder: " << std::endl;
    Cylinder default_cylinder;
    default_cylinder.print();

    std::cout << "Cylinder1: " << std::endl;
    Cylinder cylinder1(4.0, 3.0);
    cylinder1.print();
    std::cout << "V = " << cylinder1.volume() << std::endl;
    std::cout << "A = " << cylinder1.surface_area() << std::endl;

}