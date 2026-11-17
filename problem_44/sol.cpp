#include "../input.h"
#include "../string_lib.h"
#include "../vector_lib.h"
#include <string>

int main ()
{
    std::string Text = getText("Please Enter Your String?\n");

    std::cout << "\n Original String\n\n" << Text << "\n";
    
    std::cout << "\n Punctuation Removed:\n\n" << removePunctuation(Text) << "\n";
}