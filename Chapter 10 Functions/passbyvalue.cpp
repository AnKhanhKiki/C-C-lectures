#include <iostream>

int main(int argc, char**argv)
{
    int num{47};
    void increment(int a);

    std::cout << "Number before:" << num << " , Address: " << &num << std::endl;
    increment(num);
    std::cout << "Number after:" << num << " , Address: " << &num << std::endl;

    return 0;

}

void increment(int a)
{
    ++a;
    std::cout << "Number inside function: " << a << " , Address: " << &a << std::endl;
}

// The value used inside the function is only a copy of the original value. This is called a pass by value.
// So the original value will always stay the same.
// The original value and the copy value have different addresses.