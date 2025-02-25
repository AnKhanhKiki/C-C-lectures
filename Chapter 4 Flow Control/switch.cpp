#include <iostream>

// switch() only takes integers or enums as inputs
enum tool {
    Pen = 1,
    Pencil = 2,
    Eraser = 3

};

int main(int argc, char**agrv){
    int tool {};

    std::cout << "Enter a number to choose the tool (Pen: 1, Pencil: 2, Eraser: 3): " << std::endl;
    std::cin >> tool;

    switch (tool)
    {
    case Pen:
        std::cout << "Pen is being used." << std::endl;
        break; // exit switch block
    case Pencil:
        std::cout << "Pencil is being used." << std::endl;
        break;
    case Eraser:
        std::cout << "Pencil is being used." << std::endl;
        break;
    default: // happens if all cases do not happen
        std::cout << "Can't find matching tools." << std::endl;
        break;
    }
    // You can group cases as well.
}