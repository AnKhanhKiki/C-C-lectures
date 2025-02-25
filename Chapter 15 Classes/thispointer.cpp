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
        // Using Pointer
        // Setter
        Fund* set_fund_name(std::string_view name)
        {
            this->name = name; // This pointer helps distinguish the parameter from the member variable of the same name 
            return this;
        }
        Fund* set_fund_aum(double aum)
        {
            p_aum = new double;
            *(this->p_aum) = aum;
            return this;
        }
        Fund* set_fund_manager(std::string_view manager)
        {
            this->manager = manager;
            return this;
        }
        /*
        // Using Reference
        // Setter
        Fund& set_fund_name(std::string_view name)
        {
            this->name = name; // This pointer helps distinguish the parameter from the member variable of the same name 
            return *this;
        }
        Fund& set_fund_aum(double aum)
        {
            p_aum = new double;
            *(this->p_aum) = aum;
            return *this;
        }
        Fund& set_fund_manager(std::string_view manager)
        {
            this->manager = manager;
            return *this;
        }
        */
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
    std::cout << "Constructor activated for: " << name << " at " << this << std::endl; // This pointer will give the address of the object.
}
        
Fund::~Fund()
{
    delete p_aum;
    std::cout << "Destructor activated for: " << name << " at " << this << std::endl;
}

int main(void)
{
   Fund fund1("Vikings Global Investors", 59, "Ole Andreas Halvorsen") ; // Constructor called

   fund1.set_fund_name("Tiger Global Management");
   fund1.set_fund_aum(18);
   fund1.set_fund_manager("Chase Coleman II");

   // Chained call using pointer 
   Fund fund2;
   fund2.set_fund_name("Harbinger Capital Partners")->set_fund_aum(0.336)->set_fund_manager("Phillip Falcone");

   // Chained call using reference
   //Fund fund3;
   //fund3.set_fund_name("Harbinger Capital Partners").set_fund_aum(0.336).set_fund_manager("Phillip Falcone");

   std::cout << "Done!" << std::endl;

   return 0; // Destructor called
}

