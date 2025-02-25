#include <iostream>
#include <ios>
#include <iomanip>

int main(int argc, char**argv){
    // To print a new line
    std::cout << std::endl;
    std::cout << "\n" << std::endl;

    //To send data directly to the terminal instead of sending it to buffer region, use std::flush.
    std::cout << "Sent directly to the terminal." << std::endl << std::flush;

    // How to print columns
    int col_width {30};
    std::cout << "Formatted table" << std::endl;
    std::cout << std::setw(col_width) << "Number" << std::setw(col_width) << "Value" << std::setw(col_width) << "Notes" << std::endl;
    std::cout << std::setw(col_width) << "1" << std::setw(col_width) << "1.0" << std::setw(col_width) << "One" << std::endl; 
    std::cout << std::setw(col_width) << "2" << std::setw(col_width) << "2.0" << std::setw(col_width) << "Two" << std::endl;
    std::cout << std::setw(col_width) << "3" << std::setw(col_width) << "3.0" << std::setw(col_width) << "Three" << std::endl;

    std::cout << std::left; // Left-aligned
    std::cout << "Left-aligned formatted table" << std::endl;
    std::cout << std::setw(col_width) << "Number" << std::setw(col_width) << "Value" << std::setw(col_width) << "Notes" << std::endl;
    std::cout << std::setw(col_width) << "1" << std::setw(col_width) << "1.0" << std::setw(col_width) << "One" << std::endl; 
    std::cout << std::setw(col_width) << "2" << std::setw(col_width) << "2.0" << std::setw(col_width) << "Two" << std::endl;
    std::cout << std::setw(col_width) << "3" << std::setw(col_width) << "3.0" << std::setw(col_width) << "Three" << std::endl;

    // Internal justified: sign is left-aligned, data is right aligned
    std::cout << "Internal justified" << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.4 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.4 << std::endl;

    // Fill empty spaces with some characters
    std::cout << std::left; // Left-aligned
    std::cout << std::setfill('-');
    std::cout << "Left-aligned filled formatted table" << std::endl;
    std::cout << std::setw(col_width) << "Number" << std::setw(col_width) << "Value" << std::setw(col_width) << "Notes" << std::endl;
    std::cout << std::setw(col_width) << "1" << std::setw(col_width) << "1.0" << std::setw(col_width) << "One" << std::endl; 
    std::cout << std::setw(col_width) << "2" << std::setw(col_width) << "2.0" << std::setw(col_width) << "Two" << std::endl;
    std::cout << std::setw(col_width) << "3" << std::setw(col_width) << "3.0" << std::setw(col_width) << "Three" << std::endl;

    // showpos or noshowpos: show or not show the "+" for posititve numbers
    int value1 {1};
    int value2 {-1};
    std::cout << std::showpos; // or std::noshowpos
    std::cout << "Value 1: " << value1 << std::endl;
    std::cout << "Value 2: " << value2 << std::endl;
    std::cout << std::noshowpos;

    // Different number systems
    int pos_int {123456};
    int neg_int {-987654};
    // Default base format
    std::cout << "Default base format: " << pos_int << std::endl;
    std::cout << "Default base format: " << neg_int << std::endl;
    // Hexadecimal format: std::hex
    std::cout << "Hexadecimal format: " << std::hex << pos_int << std::endl;
    std::cout << "Hexadecimal format: " << std::hex << neg_int << std::endl;
    // Decimal format: std::dec = default format
    std::cout << "Decimal format: " << std::dec << pos_int << std::endl;
    std::cout << "Decimal format: " << std::dec << neg_int << std::endl;
    // Octal format: std::oct
    std::cout << "Octal format: " << std::oct << pos_int << std::endl;
    std::cout << "Octal format: " << std::oct << neg_int << std::endl;
    std::cout << std::dec;

    // Showbase
    std::cout << "With base: " << std::showbase << std::hex << pos_int << std::endl;
    std::cout << std::dec;

    //Uppercase.
    std::cout << "Uppercase: " << std::uppercase << std::hex << neg_int << std::endl;
    std::cout << std::nouppercase;

    //Scientific
    auto var {1134.2344f};
    std::cout << "Scientific: " << std::scientific << var << std::endl;

    // Fixed
    std::cout << "Fixed: " << std::fixed << var << std::endl;

    // Reset floating point output format to default
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); //Hack

    // Print numbers with decimal points: std::showpoint
    double var2 {1};
    std::cout << "Decimal: " << std::showpoint << var2 << std::endl;
    std::noshowpoint;

    return 0;
}
