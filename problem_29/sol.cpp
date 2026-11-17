#include "../input.h"
#include "../string_lib.h"
#include <string>

int main ()
{
    std::string s = getText("Please Enter the text\n");
    short NumberOfSmallLetters = countSmallLetters(s);
    short NumberOfCapLetters = countCapLetters(s);

    
    std::cout << "Number of small letters\n";
    std::cout << NumberOfSmallLetters << "\n";

    ;
    std::cout << "Number of capital letters\n";
    std::cout << NumberOfCapLetters << "\n";
}