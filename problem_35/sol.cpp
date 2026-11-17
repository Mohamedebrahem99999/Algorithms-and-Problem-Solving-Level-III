#include "../input.h"
#include "../string_lib.h"
#include <string>

int main ()
{
    std::string s = getText("Please Enter the text \n");
    std::cout << "Words in the string are \n";
    printEachWordInString(s);
}