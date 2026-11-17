#include "../input.h"
#include "../string_lib.h"
#include "../vector_lib.h"
#include <string>

int main ()
{
    std::string s = getText("Please Enter the text \n");
    s = TrimLeft(s);
    std::cout << "Trim Left = \n";
    std::cout << s << "\n";
    s = TrimRight(s);
    std::cout << "Trim Right = \n";
    std::cout << s << "\n";
    s = TrimAll(s);
    std::cout << "Trim All = \n";
    std::cout << s << "***";
}