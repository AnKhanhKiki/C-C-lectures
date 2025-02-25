#include <iostream>

int main(int argc, char**argv){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true){
        std::cout << "Stop" << std::endl;
    }
    else{
        std::cout << "Go" << std::endl;
    }

    if (green_light){
        std::cout << "Go" << std::endl;
    }
    else{
        std::cout << "Stop" << std::endl;
    }

    // Size of boolean is 1 byte
    std::cout << "Size of Boolean: " << sizeof(red_light) << std::endl;

    // Value
    std::cout << "True: " << red_light << std::endl; // True is 1
    std::cout << "False: " << green_light << std::endl; // False is 0

    // Print out Booleans with words
    std::cout << std::boolalpha;
    std::cout << red_light << std::endl;
    std::cout << green_light << std::endl;

    return 0;
}