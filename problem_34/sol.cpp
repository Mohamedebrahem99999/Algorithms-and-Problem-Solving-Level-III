#include "../input.h"
#include "../string_lib.h"
#include <string>

int main ()
{
    std::string s = getText("Please Enter the text \n");
    std::cout << "Vowels in the string are \n";
    printVowels(s);
}