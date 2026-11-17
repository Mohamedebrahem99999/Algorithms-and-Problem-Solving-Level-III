#include "../input.h"
#include "../string_lib.h"
#include "../vector_lib.h"
#include <string>

int main ()
{
    std::string Text = getText("Please Enter Your String?\n");
    std::cout << "Strign after reversing words \n" << reverseString(Text);
}