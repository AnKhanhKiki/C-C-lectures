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
}

Person::~Person(){}

class Engineer : private Person
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
// Resurrection
protected:
    using Person::get_full_name;
    using Person::get_age;
};

std::ostream& operator<<(std::ostream& out, const Engineer& engineer)
{
    out << "Engineer [Full name: " << engineer.get_full_name() << ", Age: " << engineer.get_age() << ", role: " << engineer.get_role() << "]";
    return out;
}

Engineer::Engineer(std::string_view full_name_param, int age_param, std::string_view role_param)
    : Person(full_name_param, age_param), role(role_param) {
}

Engineer::~Engineer(){}

int main(void)
{
    Engineer engineer1("Jho Low", 35, "Stole a shit ton of money.");
    std::cout << engineer1 << std::endl; 
    return 0;
}


/*
 * ================================
 *  🔄 Resurrection in Inheritance 🔄
 * ================================
 *
 * 🔹 What is resurrection in inheritance?
 * - In C++, when a class **privately inherits** from a base class, all **public and protected** members of the base class become **private** in the derived class.
 * - This means they are **not accessible** in the derived class or its subclasses.
 * - However, using the `using` keyword, we can **resurrect** these methods and reintroduce them with a different access level.
 *
 * 🔹 How is it done?
 * - In the `Engineer` class, we have:
 *   ```cpp
 *   protected:
 *       using Person::get_full_name;
 *       using Person::get_age;
 *   ```
 * - This makes `get_full_name()` and `get_age()` **protected** instead of private.
 * - Now, any **subclass of `Engineer`** can access these methods, even though `Person` was privately inherited.
 *
 * 🔹 Why is this useful?
 * - **Controlled access:** Allows a derived class (`Engineer`) to expose specific base class methods without exposing everything.
 * - **Encapsulation:** Keeps `Person`'s details hidden from the public interface of `Engineer`.
 * - **Avoids redundant code:** `Engineer` (or its subclasses) can reuse `Person`'s methods without rewriting them.
 *
 * 🔹 Example Scenario:
 * - Imagine we add another subclass:
 *   ```cpp
 *   class SoftwareEngineer : public Engineer {
 *   public:
 *       SoftwareEngineer(std::string full_name_param, int age_param, std::string role_param)
 *           : Engineer(full_name_param, age_param, role_param) {}
 *
 *       void print_info() {
 *           // `get_full_name()` and `get_age()` are accessible because of resurrection!
 *           std::cout << "Software Engineer: " << get_full_name() 
 *                     << ", Age: " << get_age() << ", Role: " << role << std::endl;
 *       }
 *   };
 *   ```
 * - Here, `SoftwareEngineer` **inherits from `Engineer`**.
 * - `get_full_name()` and `get_age()` **were private in `Person` but became protected in `Engineer`**.
 * - Now `SoftwareEngineer` **can access them directly**.
 *
 * 🔹 When should you avoid this?
 * - If you want strict encapsulation and don't want **derived classes** to have access to base class functions.
 * - If it makes code **too confusing**—because private inheritance normally hides base class members, and resurrection overrides this behavior.
 *
 * 🚀 **Conclusion:**  
 * Resurrection via `using` is a **powerful but subtle feature** in C++ that allows selectively exposing hidden base class members.  
 * It’s useful for **controlled inheritance**, but should be used **carefully** to avoid breaking encapsulation principles.
 */

