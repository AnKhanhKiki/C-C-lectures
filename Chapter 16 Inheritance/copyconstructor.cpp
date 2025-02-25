#include <iostream>

class Fund
{
    friend std::ostream& operator<<(std::ostream& out, const Fund& fund);
private:
    std::string fund_name {"Default Fund"};
    double aum {0};
public:
    // Default Constructor
    Fund() = default;
    // Constructor
    Fund(std::string_view fund_name_param, double aum_param);
    // Copy Constructor
    Fund(const Fund& source);
    // Destructor
    ~Fund();
    // Getters
    std::string get_fund_name() const
    {
        return fund_name;
    }
    double get_aum() const
    {
        return aum;
    }
};

std::ostream& operator<<(std::ostream& out, const Fund& fund)
{
    out << "Fund: [ Name: " << fund.fund_name << ", AUM: " << fund.aum << "]";
    return out; 
}

Fund::Fund(std::string_view fund_name_param, double aum_param)
: fund_name(fund_name_param), aum(aum_param){
    std::cout << "Custom Constructor for Fund called." << std::endl;
}

Fund::Fund(const Fund& source)
: fund_name(source.fund_name), aum(source.aum){
    std::cout << "Copy Constructor for Fund called." << std::endl;
}

Fund::~Fund(){}

class HedgeFund : public Fund
{
    friend std::ostream& operator<<(std::ostream& out, const HedgeFund& hf);
private: 
    std::string strategies {"Default strategies"};
public:
    // Default Constructor
    HedgeFund() = default;
    // Constructor
    HedgeFund(std::string_view fund_name_param, double aum_param, std::string_view strategies_param);
    // Copy Constructor
    HedgeFund(const HedgeFund& source);
    // Destructor
    ~HedgeFund();
    // Getters
    std::string get_strategies() const
    {
        return strategies;
    }
};

std::ostream& operator<<(std::ostream& out, const HedgeFund& hf)
{
    out << "Hegde Fund [ Name: " << hf.get_fund_name() << ", AUM: " << hf.get_aum() << ", Strategies: " << hf.strategies << "]";
    return out;
}

HedgeFund::HedgeFund(std::string_view fund_name_param, double aum_param, std::string_view strategies_param)
: Fund(fund_name_param, aum_param), strategies(strategies_param){
    std::cout << "Custom Constructor for HedgeFund called." << std::endl;
}

HedgeFund::HedgeFund(const HedgeFund& source)
: Fund(source), strategies(source.strategies){
    std::cout << "Copy Constructor for HedgeFund called." << std::endl;
}

HedgeFund::~HedgeFund(){}

int main(int agrc, char**argv)
{
    HedgeFund citadel("Citadel", 62.3, "Multi Strategies");
    HedgeFund citadel2(citadel);
    std::cout << "Copied Version: " << citadel2 << std::endl;
    return 0;
}

// Copy constructors allow us to make a copy of an object.




