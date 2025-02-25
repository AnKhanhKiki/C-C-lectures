#include <iostream>

// Base class: Person
class Person {
protected:
    std::string name;
    int age;

public:
    Person(std::string n, int a) : name(n), age(a) {} // Constructor
    void displayPerson() { 
        std::cout << "Name: " << name << ", Age: " << age << std::endl; 
    }
};

// Publicly derived class: Analyst
class Analyst : public Person {
public:
    Analyst(std::string n, int a) : Person(n, a) {} // Calling base class constructor

    void work() {
        std::cout << name << " analyses financial data." << std::endl;
    }
};

// Protectedly derived class: PortfolioManager
class PortfolioManager : protected Person {
public:
    PortfolioManager(std::string n, int a) : Person(n, a) {} // Calling base class constructor

    void managePortfolio() {
        std::cout << name << " manages investment portfolios." << std::endl;
    }

    void showDetails() { // We can access protected members here
        displayPerson();
    }
};

// Privately derived class: CIO (Chief Investment Officer)
class CIO : private Person {
public:
    CIO(std::string n, int a) : Person(n, a) {} // Calling base class constructor

    void makeDecisions() {
        std::cout << name << " makes high-level investment decisions." << std::endl;
    }

    void showInfo() { // We must create a public function to access Person's details
        displayPerson();
    }
};

// Main function
int main() {
    // Creating objects
    Analyst analyst("Alice", 30);
    PortfolioManager pm("Bob", 40);
    CIO cio("Charlie", 50);

    std::cout << "Analyst Details:" << std::endl;
    analyst.displayPerson(); // Allowed because of public inheritance
    analyst.work();

    std::cout << "\nPortfolio Manager Details:" << std::endl;
    // pm.displayPerson(); // ERROR: displayPerson() is protected due to protected inheritance
    pm.showDetails(); // Instead, we use a function that exposes details
    pm.managePortfolio();

    std::cout << "\nCIO Details:" << std::endl;
    // cio.displayPerson(); // ERROR: displayPerson() is private due to private inheritance
    cio.showInfo(); // Must use this function to access Person's details
    cio.makeDecisions();

    return 0;
}

/*
========================================
           ACCESSIBILITY EXPLANATION
========================================
1. PUBLIC INHERITANCE (Analyst : public Person)
   - `name` (protected) → Remains protected in `Analyst`
   - `displayPerson()` (public) → Remains public in `Analyst`, accessible in main()
   - `Analyst` can access `name` and `displayPerson()` directly.

2. PROTECTED INHERITANCE (PortfolioManager : protected Person)
   - `name` (protected) → Remains protected in `PortfolioManager`
   - `displayPerson()` (public) → Becomes protected in `PortfolioManager`
   - `displayPerson()` is NOT accessible in main(), but is accessible inside `PortfolioManager` methods.
   - Must use `showDetails()` to expose `displayPerson()`.

3. PRIVATE INHERITANCE (CIO : private Person)
   - `name` (protected) → Becomes private in `CIO`
   - `displayPerson()` (public) → Becomes private in `CIO`
   - `displayPerson()` is NOT accessible in main() or derived classes.
   - Must use `showInfo()` to expose `displayPerson()`.

-----------------------------------------
SUMMARY:
- Public inheritance keeps accessibility levels the same.
- Protected inheritance restricts access (public → protected).
- Private inheritance hides everything (public/protected → private).
========================================
*/


