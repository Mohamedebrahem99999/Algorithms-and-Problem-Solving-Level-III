#include "../input.h"
#include "../string_lib.h"
#include <string>

int main ()
{
    std::string s = getText("Please Enter the text \n");
    char c = readChar("Enter a character to count\n");
    short Count = countLetterCaseSensitive(s, c);
    printf("The number of time this letter appeared in the string = %d Case sensitively\n",Count);
}