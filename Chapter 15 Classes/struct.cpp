#include <iostream>
#include <string>

struct rectangle
{
    double length1;
    double length2;
    double area()
    {
        double area = length1 * length2;
        std::cout << "Area: " << area << std::endl;
        return area;
    }
};

int main(void)
{
    rectangle r1;
    r1.length1 = 30.42;
    r1.length2 = 64.59;
    r1.area();
    return 0;
}

// A struct is the same as a class.
// The only difference is that: struct's members are public by default, class's members are private by default.
// But member can always be modified to private or public if needed.