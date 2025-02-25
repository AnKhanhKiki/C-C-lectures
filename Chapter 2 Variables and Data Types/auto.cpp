#include <iostream>

int main(int argc, char**argv){
    // auto can detect the type of variable initialised
    auto var_1 {1};
    auto var_2 {2.0};
    auto var_3 {3.00000f};
    auto var_4 {4.00000000l};
    auto var_5 {5u};
    auto var_6 {-6l};
    auto var_7 {7ll};

    return 0;
}