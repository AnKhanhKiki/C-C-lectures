#include <iostream>
#include <string>

class Fund
{
    private:
        std::string fund_name;
        double fund_aum{};
        std::string fund_manager;
    public:
    // Default object
    Fund() = default;
    //Setters
        void set_fund_name(std::string name)
        {
            fund_name = name;
        }
        void set_fund_aum(double aum)
        {
            fund_aum = aum;
        }
        void set_fund_manager(std::string manager)
        {
            fund_manager = manager;
        }
    // Getters
        std::string get_fund_name()
        {
            std::cout << "Hedge fund: " << fund_name << std::endl;
            return fund_name;
        }
        double get_fund_aum()
        {
            std::cout << "AUM: $" << fund_aum << " billion." << std::endl;
            return fund_aum;
        }
        std::string get_fund_manager()
        {
            std::cout << "Fund Manager: " << fund_manager << std::endl;
            return fund_manager;
        }
};

int main(void)
{
    Fund citadel;
    citadel.set_fund_name("Citadel LLC");
    citadel.set_fund_aum(62.3);
    citadel.set_fund_manager("Kenneth C. Griffin");

    citadel.get_fund_name();
    citadel.get_fund_aum();
    citadel.get_fund_manager();

    std::cout << "---------------------------------" << std::endl;

    Fund deshaw;
    deshaw.set_fund_name("D. E. Shaw & Co");
    deshaw.set_fund_aum(60);
    deshaw.set_fund_manager("David E. Shaw");

    deshaw.get_fund_name();
    deshaw.get_fund_aum();
    deshaw.get_fund_manager();

    return 0;

}

// You can use setters to modify the values of the member variables in the object.
// You can use getters to get the values of the member variables in the object.