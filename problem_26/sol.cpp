#include "../input.h"
#include "../string_lib.h"

int main ()
{
    std::string Text = getText("Please Enter your string?\n");
    lowerString(Text);
    std::cout << "Text in Lowercase: \n";
    std::cout << Text << "\n";
    upperString(Text);
    std::cout << "Text in Uppercase: \n";
    std::cout << Text << "\n";
}