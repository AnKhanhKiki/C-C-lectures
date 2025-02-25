#include <iostream>

int main(int argc, char**argv)
{
    int num{47};
    void increment(int& a);

    std::cout << "Number before:" << num << " , Address: " << &num << std::endl;
    increment(num);
    std::cout << "Number after:" << num << " , Address: " << &num << std::endl;

    return 0;

}

void increment(int& a)
{
    ++a;
    std::cout << "Number inside function: " << a << " , Address: " << &a << std::endl;
}

// Pass by reference will pass the original value into the function and change it.
// The address will remain the same.