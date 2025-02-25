#include <iostream>
#include <string>

class Dog
{
    private:
        std::string name;
        size_t age;
        std::string breed;
    public:
    // Default
    Dog() = default;
    // Constructor
    Dog(std::string name_param, size_t age_param, std::string breed_param)
    {
        name = name_param;
        age = age_param;
        breed = breed_param;
    }

};

int main(void)
{
    Dog dog1("Candy", 9, "Poodle");
    // Size of a class object is the sum of the sizes of member variables.
    std::cout << "sizeof(Dog): " << sizeof(dog1) << std::endl;
}