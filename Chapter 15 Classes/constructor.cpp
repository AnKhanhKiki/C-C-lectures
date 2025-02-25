#include <iostream>
#include <string>

class Fund
{
    private: // Member variables should be set to private so that no one can mess with it
        std::string name {"Default"};
        double aum {0};
        std::string manager {"Default"};
    public:
    // Constructor: allows you to build an object of that class with input info
        Fund(std::string fund_name, double fund_aum, std::string manager_name)
        {
            name = fund_name;
            aum = fund_aum;
            manager = manager_name;
        }
    public:
        void fund_info()
        {
            std::cout << "Hedge fund: " << name << std::endl;
            std::cout << "AUM: $" << aum << " billion" << std::endl;
            std::cout << "Manager: " << manager << std::endl; 
        }
};

int main(void)
{
    Fund Citadel("Citadel LLC", 62.3, "Ken Griffin");
    Citadel.fund_info();

    std::cout << "-----------------------------------" << std::endl;

    Fund TCI("The Children Investment Fund Management", 62, "Sir Chris Hohn");
    TCI.fund_info();

    std::cout << "-----------------------------------" << std::endl;

    Fund Millenium("Millenium Management LLC", 70.2, "Israel Englander");
    Millenium.fund_info();

    return 0;
}