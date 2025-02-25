#include <iostream>
#include <string>
#include <string_view>

// Base class: Person
class Person
{
    // Friend function allows operator<< to access private members
    friend std::ostream& operator<<(std::ostream& out, const Person& person);

private:
    std::string first_name{"Default"}; // Private: Only accessible within Person
    std::string last_name{"Person"};   // Private: Only accessible within Person

protected:
    std::string protected_data{"This is protected"}; // Accessible in derived classes

public:
    // Default constructor
    Person() = default;

    // Parameterized constructor
    Person(std::string& first_name_param, std::string& last_name_param);

    // Destructor
    ~Person();

    // Setter methods (modify first & last names)
    void set_first_name(std::string_view fn)
    {
        first_name = fn;
    }

    void set_last_name(std::string_view ln)
    {
        last_name = ln;
    }

    // Getter methods (retrieve first & last names)
    std::string get_first_name() const
    {
        return first_name;
    }

    std::string get_last_name() const
    {
        return last_name;
    }
};

// Constructor definition (initializer list used for efficiency)
Person::Person(std::string& first_name_param, std::string& last_name_param)
    : first_name(first_name_param), last_name(last_name_param)
{
}

// Destructor definition (currently empty)
Person::~Person()
{
}

// Overloaded output operator to print Person details
std::ostream& operator<<(std::ostream& out, const Person& person)
{
    out << "Person [" << person.first_name << " " << person.last_name << "]";
    return out;
}

// Derived class: Player (inherits from Person)
class Player : public Person
{
    // Friend function to allow access to private members
    friend std::ostream& operator<<(std::ostream& out, const Player& player);

private:
    std::string m_game{"None"}; // Default game is "None"

public:
    // Default constructor
    Player() = default;

    // Parameterized constructor (takes a game name)
    Player(std::string_view game_param);

    // Destructor
    ~Player();

    // Function to access protected member from base class
    void show_protected_data()
    {
        std::cout << "Accessing protected data from Player: " << protected_data << std::endl;
    }

    // Function to attempt access to private members (will NOT compile if uncommented)
    /*
    void try_access_private()
    {
        std::cout << "First Name: " << first_name << std::endl; // ERROR: first_name is private in Person
    }
    */
};

// Overloaded output operator for Player class
std::ostream& operator<<(std::ostream& out, const Player& player)
{
    // Calls get_first_name() and get_last_name() inherited from Person
    out << "Player: [ game: " << player.m_game 
        << ", name: " << player.get_first_name() 
        << " " << player.get_last_name() << "]";
    return out;
}

// Player constructor definition
Player::Player(std::string_view game_param)
    : m_game(game_param) // Initialize game using initializer list
{
}

// Destructor definition (currently empty)
Player::~Player()
{
}

// Main function: Entry point of the program
int main()
{
    // Creating a Player object with the game "Basketball"
    Player player1("Basketball");

    // Setting first and last names (using inherited setters)
    player1.set_first_name("LeBron");
    player1.set_last_name("James");

    // Printing player details using overloaded operator<<
    std::cout << "Player 1: " << player1 << std::endl;

    // Accessing protected data from derived class
    player1.show_protected_data();

    return 0;
}

/*
============================================
    ACCESSIBILITY IN INHERITANCE (C++)
============================================

When a class (Player) inherits from another class (Person), it gets access 
to some of the base class members, depending on their access specifiers.

ACCESS SPECIFIERS:
-------------------
1) **PRIVATE (`private`)**  
   - Members marked as `private` in the base class CANNOT be accessed directly in the derived class.
   - Example: `first_name` and `last_name` in `Person` are private.
   - The `Player` class CANNOT access them directly.
   - However, it CAN access them through **public getters and setters**.

2) **PROTECTED (`protected`)**  
   - Members marked as `protected` in the base class CAN be accessed in the derived class.
   - Example: `protected_data` is accessible inside `Player`.

3) **PUBLIC (`public`)**  
   - Public members of the base class remain public in the derived class.
   - Example: `get_first_name()` and `get_last_name()` are public in `Person`,
     so `Player` can call them.

4) **FRIENDS (`friend`)**  
   - A friend function (like `operator<<`) can access private members.
   - Example: `operator<<` can directly access private members of `Person` and `Player`.

-----------------------------------
SUMMARY OF ACCESSIBILITY TABLE
-----------------------------------

| Access Specifier | Accessible in Derived Class? |
|------------------|----------------------------|
| `private`       | ❌ No (Not accessible)     |
| `protected`     | ✅ Yes (Accessible)       |
| `public`        | ✅ Yes (Accessible)       |

-----------------------------------
EXAMPLES:
-----------------------------------
✔ Allowed:
```cpp
std::cout << get_first_name(); // Works because it's a public method
std::cout << protected_data; // Works because it's protected
*/
