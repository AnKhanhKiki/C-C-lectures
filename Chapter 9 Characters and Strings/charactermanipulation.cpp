#include <iostream>
#include <cctype>

int main(int argc, char**argv)
{
    // Check if character is alphanumeric
    std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
    std::cout << "* is alphanumeric: " << std::isalnum('*') << std::endl;

    // Check if character is alphabetic
    if (std::isalpha('A') == true)
    {
        std::cout << "A is alphabetic." << std::endl;
    }
    else
    {
        std::cout << "A is not alphabetic." << std::endl;
    }

    // Check if character is blank
    char text[] {"Yes, the hedge fund industry is highly competitive and arguably overcrowded, but there are still opportunities for those who can generate superior risk-adjusted returns."};
    
    size_t blank_count{0};
    for(auto c : text)
    {
        if (std::isblank(c) == true)
        {
            blank_count++;
        }
    }
    std::cout << "Number of blanks: " << blank_count << std::endl;

    // Check if upper or lowercase
    char textt[] {"Tactical Small Funds - Smaller funds (<$500M AUM) can be more agile and exploit inefficiencies that large funds can't."};

    size_t upper_count{0};
    size_t lower_count{0};

    for (size_t c = 0; c < std::size(textt) - 1; c++) { // Avoid counting '\0'
        if (std::isupper(textt[c])) {
            upper_count++;
        } else if (std::islower(textt[c])) {
            lower_count++;
        }
    }

    std::cout << "Number of lowercase characters: " << lower_count << std::endl;
    std::cout << "Number of uppercase characters: " << upper_count << std::endl;

    //Check if character is digit
    size_t digit_count{0};
    for(auto c : textt)
    {
        if(std::isdigit(c))
        {
            digit_count++;
        }
    }
    std::cout << "Number of digits: " << digit_count << std::endl;

    // Change to lower or uppercase
    char upper_text[std::size(textt)]{};

    for(size_t c = 0; c < std::size(textt); c++)
    {
        upper_text[c] = std::toupper(textt[c]); 
    }
    std::cout << "upper_text: " << upper_text << std::endl;


    return 0;
}