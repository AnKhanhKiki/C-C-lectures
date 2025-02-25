#include <iostream>
#include <cstring>

int main(int argc, char**argv)
{
    // Concatenation 
    // strcat
    char str1[] = "Hello";
    char str2[] = " World"; 
    std::cout << std::strcat(str1, str2) << std::endl;
    char str3[] = ", Goodbye World!";
    std::cout << std::strcat(str1, str3) << std::endl;

    // strncat
    /*
    char str4[] {"Hello"};
    char str5[] {"Motherfucker"};
    std::cout << std::strncat(str4, str5, 6) << std::endl;
    */

    // Copy
    // strcpy
    // Original string (read-only, stored in .rodata section)
    const char* str6 = "Make money then marry someone funny.";

    // Allocate memory for str7 (including null terminator)
    char* str7 = new char[std::strlen(str6) + 1];

    // Copy full string from str6 to str7
    std::cout << std::strcpy(str7, str6) << std::endl;

    // Copy only the first 10 characters from str6 to str7
    std::cout << std::strncpy(str7, str6, 10) << std::endl;

    // Manually add null terminator after strncpy (if needed)
    str7[10] = '\0';
    std::cout << str7 << std::endl;

    // Free dynamically allocated memory
    delete[] str7;

    return 0;
}