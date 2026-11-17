#include "../input.h"
#include "../string_lib.h"

int main ()
{
    std::string Text = getText("Please Enter your string?\n");
    printFirstLetterOfEachWord(Text);
}