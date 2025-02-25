#include <iostream>

class Person
{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
private: 
    std::string full_name {"Default Person"};
    int age {0};
public:
    Person() = default;
    // Constructor
    Person(std::string_view full_name_param, int age_param);
    // Destructor
    ~Person();
    // Getter
    std::string_view get_full_name() const
    {
        return full_name;
    }
    int get_age() const
    {
        return age;
    }
};

std::ostream& operator<<(std::ostream& out, const Person& person)
{
    out << "Person [Full name: " << person.full_name << ", Age: " << person.age << "]";
    return out;
}

Person::Person(std::string_view full_name_param, int age_param)
    : full_name(full_name_param), age(age_param){
        std::cout << "Default constructor for Person called." << std::endl;
}

Person::~Person(){}

class Engineer : public Person
{
    friend std::ostream& operator<<(std::ostream& out, const Engineer& engineer);
public:
    std::string role{"Default"};
private:
    long int salary {0};
public:
    Engineer() = default;
    // Constructor
    Engineer(std::string_view full_name_param, int age_param, std::string_view role_param);
    // Destructor
    ~Engineer();
    // Getter
    std::string get_role() const
    {
        return role;
    }
};

std::ostream& operator<<(std::ostream& out, const Engineer& engineer)
{
    out << "Engineer [Full name: " << engineer.get_full_name() << ", Age: " << engineer.get_age() << ", role: " << engineer.get_role() << "]";
    return out;
}

Engineer::Engineer(std::string_view full_name_param, int age_param, std::string_view role_param)
    : Person(full_name_param, age_param), role(role_param) // Custom constructor called
{
    std::cout << "Default constructor for Engineer called." << std::endl;
}

Engineer::~Engineer(){}

class MechEng : public Engineer
{
    friend std::ostream& operator<<(std::ostream& out, const MechEng& mecheng);
public:
    int yoe {0};
public:
    MechEng() = default;
    // Constructor:
    MechEng(std::string_view full_name_param, int age, std::string_view role, int yoe);
    // Destructor:
    ~MechEng();
    // Getters
    int get_yoe()
    {
        return yoe;
    }
};

std::ostream& operator<<(std::ostream& out, const MechEng& mecheng)
{
    out << "Person: [Full name: " << mecheng.get_full_name() << ", Age: " << mecheng.get_age() << ", Role: " << mecheng.get_role() << ", Year of experience: " << mecheng.yoe << "]";
    return out;
}

MechEng::MechEng(std::string_view full_name_param, int age, std::string_view role, int yoe)
: Engineer(full_name_param, age, role), yoe(yoe) // Custom constructor called
{
    std::cout << "Default constructor for MechEng called." << std::endl;
}

MechEng::~MechEng(){}


int main(void)
{
    MechEng me1("Jho Low", 35, "Design engines", 4);
    return 0;
}


/*
Key educational points covered:

Default Constructors: Shows how derived classes depend on base class default constructors

Custom Constructors: Demonstrates explicit base class initialization

Inheritance Chain: Shows constructor propagation through Person → Engineer → MechEng

Initialization Order: Base class always initialized before derived members

Error Prevention: Highlights consequences of missing base class constructors
*/
