#include "../input.h"
#include "../string_lib.h"
#include <string>

int main ()
{
    char c = readChar("Enter a character to check if vowel or not\n");
    if (isVowel(c))
        printf("YES Letter '%c' is a Vowel\n",c);
    else
        printf("NO, Letter '%c' is not a vowel\n",c);
}