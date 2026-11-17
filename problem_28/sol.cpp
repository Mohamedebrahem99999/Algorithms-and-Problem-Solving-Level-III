#include "../input.h"
#include "../string_lib.h"
#include <string>

int main ()
{
    std::string s = getText("Please Enter the text to Swap Case \n");
    swapStringCaseByRef(s);
    std::cout << s << "\n";
}