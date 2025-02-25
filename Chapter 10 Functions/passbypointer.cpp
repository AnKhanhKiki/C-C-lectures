#include <iostream>

int main(int argc, char**argv)
{
    int num{50};
    void increment(int* a);

    std::cout << "Number before: " << num << " , Address: " << &num << std::endl;
    increment(&num);
    std::cout << "Number after: " << num << " , Address: " << &num << std::endl;
}

void increment(int* a)
{
    ++(*a);
    std::cout << "Number inside funtion: " << *a << " , Address: " << &a << std::endl;
}

// Pass by pointer will affect the original value since you're passing the address of the original value into the function.
// Since you're using a pointer, you should pass in the address as the argument. 
// And you need to dereference the address to carry out operations on the value.