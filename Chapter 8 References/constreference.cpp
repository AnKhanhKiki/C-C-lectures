#include <iostream>

int main(int argc, char**argv)
{
    double num{73.45};
    const double& ref_num{num}; // constant reference

    /*
    original value does not have to be of const type. 
    you cannot modify the reference therefore you cannot use reference to modify the original data.
    */

    return 0;
}