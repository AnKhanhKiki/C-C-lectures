#include <iostream>

int main(int argc, char**argv){
    int var {11}; //Declare and initialise
    std::cout << "Variable: " << var << std::endl;
    var = 12; //Assign
    std::cout << "Variable: " << var << std::endl;

    /* 
    Careful when declare and initialise then assign because you may assign an invalid value later
    int var {11};
    var = 12.0 
    */
   
   std::cout << std::boolalpha;
   auto var_2 {true};
   std::cout << "Variable: " << var_2 << std::endl;
   var_2 = false;
   std::cout << "Variable: " << var_2 << std::endl;  
   return 0;
}