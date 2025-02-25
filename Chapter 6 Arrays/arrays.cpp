#include <iostream>
#include <cmath>

int main(int argc, char**argv){
    // Declare an array
    int numbers[10];

    // Assign values inside array by for loop
    /*for(int i = 0; i < 10; i++){
        numbers[i] = i * 2;
        std::cout << "Element " << i << ": " << numbers[i] << std::endl; 
    }
    */

    // Can also do that with while loop
    size_t i = 0;
    while(i < 10)
    {
        numbers[i] = i * 2;
        std::cout << "Element" << i << ": " << numbers[i] << std::endl;
        i++;
    }

    std::cout << "---------------------" << std::endl;

    // Declare and initialise at the same time
    double array[6] {1., 2., 3., 4., 5., 6.};
    const double power = 2;

    for (size_t i = 0; i < 6; i++)
    {
        std::cout << "Element " << i << ": " << (pow(array[i], power)) << std::endl;
    }
    
    // Omit size when initialise
    int array2[] {7, 8, 9, 10, 11, 12};
    // No need to do iteration
    for(auto value : array2) // for "value" inside array2
    {
        std::cout << "Values: " << value << std::endl;
    }

    std::cout << "---------------------" << std::endl;

    // Sum up values in an array
    int array1[10];
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        array1[i] = i * 2;
        sum += array1[i];
        std::cout << "array[" << i << "] = " << array1[i] << std::endl;
        std::cout << "Sum =" << sum << std::endl;
    }

    // Array stores elements of the same type
    // If you don't initialise all element in an array, the uninitialised elements are set to 0
}