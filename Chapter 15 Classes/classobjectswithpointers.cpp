#include <iostream>
#include <string>
#include "academics.h"

int main(int argc, char**argv)
{
    // Stack object
    academics thermo;
    thermo.set_module_name("Thermodynamics");
    thermo.set_grade(97);

    // Managing a stack object through pointer
    academics* p_thermo = &thermo;
    (*p_thermo).get_module_name();
    (*p_thermo).get_grade();

    // Or you can use "->"
    p_thermo->get_module_name();
    p_thermo->get_grade();

    // Heap object: use pointer
    academics* p_maths = new academics;
    p_maths->set_module_name("Mathematics");
    p_maths->set_grade(94);
    p_maths->get_module_name();
    p_maths->get_grade();

    delete p_maths;
    p_maths = nullptr;
}