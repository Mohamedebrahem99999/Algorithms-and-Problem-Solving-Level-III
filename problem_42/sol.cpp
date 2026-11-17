#include "../input.h"
#include "../string_lib.h"
#include "../vector_lib.h"
#include <string>

int main ()
{
    std::string Text = getText("Please Enter Your String?\n");
    std::string StringToBeReplacee = getText("Enter Text to be replaced\n");
    std::string StringToReplace = getText("Enter Text To replace the old text\n");

    std::cout << "\n Original String\n\n" << Text << "\n";
    std::cout << "\n\n String After Replace : \n";

    std::cout << "\n" << Replace(Text, StringToBeReplacee, StringToReplace) << "\n";
}