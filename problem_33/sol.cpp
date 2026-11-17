#include "../input.h"
#include "../string_lib.h"
#include <string>

int main ()
{
    std::string s = getText("Please Enter the text \n");
    short Count = countVowels(s);
    printf("Number of Vowels  = %d\n",Count);
}