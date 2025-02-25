#include <iostream>
#include <string_view>
#include <string>

class Fund
{
    private: 
        std::string name;
        double* p_aum{nullptr};
        std::string manager;
    public: 
        Fund() = default;
        // Constructor
        Fund(std::string_view name_param, double aum_param, std::string_view manager_param);
        // Destructor
        ~Fund();
};

// Definitions of constructor and destructor outside of the class
Fund::Fund(std::string_view name_param, double aum_param, std::string_view manager_param)
{
    name = name_param;
    p_aum = new double;
    *p_aum = aum_param;
    manager = manager_param;
    std::cout << "Constructor activated for: " << name << std::endl;
}
        
Fund::~Fund()
{
    delete p_aum;
    std::cout << "Destructor activated for: " << name << std::endl;
}

void some_func()
{
    Fund("Millenium Management LLC", 70, "Israel Englander");
} // Object is destroyed here

int main(int argc, char**argv)
{
    Fund("Citadel LLC", 62.3, "Kenneth C. Griffin");
    some_func();
    Fund* p_viking = new Fund("Viking Global Investors", 59, "Ole Andreas Halvorsen");
    delete p_viking; // Object is destroyed here

    // Order of constructor and destructor
    Fund fund1("Fund1", 1, "manager1");
    Fund fund2("Fund2", 2, "manager2");
    Fund fund3("Fund3", 3, "manager3");
    Fund fund4("Fund4", 4, "manager4"); // Order of destructor is opposite

    std::cout << "Done!" << std::endl;
    return 0;
} // Object is destroyed here

/*
Destructor is used to free memory allocated for the object.
Destructor is called when:
 a function ends and the object is no longer in scope
 a heap object is deleted
*/