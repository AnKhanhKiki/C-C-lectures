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

// Engineer privately inherits from Person
class Engineer : private Person {
public:
    Engineer(std::string n, int a) : Person(n, a) {} // Calls Person's constructor

    // Public method to expose Person's details
    void showDetails() {
        displayPerson(); // Can access because it's private inheritance
    }

    void design() {
        std::cout << name << " is designing a system." << std::endl;
    }
};

// MechanicalEngineer publicly inherits from Engineer
class MechanicalEngineer : public Engineer {
public:
    MechanicalEngineer(std::string n, int a) : Engineer(n, a) {} // Calls Engineer's constructor

    void developMachines() {
        std::cout << "Developing mechanical systems." << std::endl;
    }

    void showEngineerDetails() {
        showDetails(); // Allowed because showDetails() is public in Engineer
    }
};

// Main function
int main() {
    Engineer eng("Alice", 35);
    MechanicalEngineer mechEng("Bob", 40);

    std::cout << "Engineer Details:" << std::endl;
    eng.showDetails(); // Can access via Engineer's public method
    eng.design();

    std::cout << "\nMechanical Engineer Details:" << std::endl;
    mechEng.showEngineerDetails(); // Calls showDetails() from Engineer
    mechEng.developMachines();

    // Direct access to displayPerson() is NOT allowed:
    // eng.displayPerson();  // ERROR: displayPerson() is private in Engineer
    // mechEng.displayPerson(); // ERROR: Not inherited from Person directly

    return 0;
}

/*
========================================
       ACCESSIBILITY EXPLANATION
========================================
1. PRIVATE INHERITANCE (Engineer : private Person)
   - `name` (protected in Person) → Becomes **private** in `Engineer`
   - `displayPerson()` (public in Person) → Becomes **private** in `Engineer`
   - `Engineer` must define `showDetails()` to expose `displayPerson()`.

2. PUBLIC INHERITANCE (MechanicalEngineer : public Engineer)
   - `MechanicalEngineer` inherits everything **from `Engineer`**, NOT from `Person`!
   - `MechanicalEngineer` **cannot access `Person`'s members directly**.
   - It can only use public methods of `Engineer` (`showDetails()`, `design()`).

-----------------------------------------
SUMMARY:
- Private inheritance means `Engineer` is **not** a `Person` outside its own class.
- `MechanicalEngineer` **is an `Engineer`** but **not a `Person`**.
- `MechanicalEngineer` must rely on `Engineer`'s public methods to access `Person`'s details.
========================================
*/
