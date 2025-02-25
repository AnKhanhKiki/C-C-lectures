#include <iostream>
#include <string>

// Overloading by different parameter types
void display(int num) {
    std::cout << "Integer: " << num << std::endl;
}

void display(double num) {
    std::cout << "Double: " << num << std::endl;
}

void display(const std::string& text) {
    std::cout << "String: " << text << std::endl;
}

// Overloading by different number of parameters
void printMessage(const std::string& message) {
    std::cout << "Message: " << message << std::endl;
}

void printMessage(const std::string& message, int count) {
    for (int i = 0; i < count; i++) {
        std::cout << "Message " << i + 1 << ": " << message << std::endl;
    }
}

// Overloading by different order of parameters
void calculate(int a, double b) {
    std::cout << "Integer + Double: " << a + b << std::endl;
}

void calculate(double a, int b) {
    std::cout << "Double + Integer: " << a + b << std::endl;
}

// Overloading with default parameters
void show(int a, int b = 10) {
    std::cout << "a: " << a << ", b: " << b << std::endl;
}

void show(double a) {
    std::cout << "Double: " << a << std::endl;
}

// Overloading with const vs. non-const references
void print(int& x) {
    std::cout << "Non-const reference: " << x << std::endl;
}

void print(const int& x) {
    std::cout << "Const reference: " << x << std::endl;
}

int main() {
    std::cout << "=== Function Overloading in C++ ===" << std::endl;

    // Overloading by different parameter types
    std::cout << "\nOverloading by different types:\n";
    display(10);
    display(5.5);
    display("Hello, World!");

    // Overloading by different number of parameters
    std::cout << "\n Overloading by different number of parameters:\n";
    printMessage("Hello");
    printMessage("Hello", 3);

    // Overloading by different order of parameters
    std::cout << "\nOverloading by different order of parameters:\n";
    calculate(5, 3.2);
    calculate(2.5, 4);

    // Overloading with default parameters
    std::cout << "\nOverloading with default parameters:\n";
    show(5);
    show(5, 20);
    show(3.14);

    // Overloading with const vs. non-const references
    std::cout << "\nOverloading with const vs. non-const references:\n";
    int a = 5;
    const int b = 10;
    
    print(a); // Calls non-const version
    print(b); // Calls const version

    return 0;
}
