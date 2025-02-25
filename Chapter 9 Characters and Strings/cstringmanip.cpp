#include <iostream>
#include <cstring>

int main(int argc, char**argv)
{
    // Find the length of a string
    const char text1[] {"Sheer Number of Funds - There are over 15,000 hedge funds globally, all competing for the same pool of institutional and high-net-worth capital."};
    auto length = std::strlen(text1); // strlen ignores \0
    std::cout << "Length of string: " << length << std::endl;

    // strlen works with arrays that decay into pointers as well
    const char* text2[] {"Sheer Number of Funds - There are over 15,000 hedge funds globally, all competing for the same pool of institutional and high-net-worth capital."};
    std::cout << "Length of string: " << std::strlen(*text2) << std::endl;

    // Compare strings
    // strcmp gives a negative value if lhs appears before rhs in lexicographical order
    const char string1[] {"Billions"};
    const char string2[] {"Millions"};

    std::cout << "Compare string1 and string2: " << std::strcmp(string2, string1) << std::endl;

    const char* string3[] {"Messi"};
    const char* string4[] {"Messy"};

    std::cout << "Compare string3 and string4: " << std::strcmp(*string3, *string4) << std::endl;

    // strchr finds the first occurrence of a character
    // Find a character inside a text
    const char* text3[] {"These firms, often referred to as the 'Billion Dollar Club,' collectively oversee around $3.13 trillion, accounting for about 80% of the total hedge fund industry assets."};
    char target = 'o';
    const char* result = *text3;
    size_t interations{};

    while((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found: " << target << ", starting at: '" << result << "' " << std::endl;
        ++result;
        ++interations;
    }

    std::cout << "interations: " << interations << std::endl;

    // Finding the last occurrence of a character
    char input[] = "/home/user/hello.cpp";
    char* output = std::strrchr(input, '/');

    if(output)
    {
        std::cout << output + 1 << std::endl;
    }

    return 0;
}