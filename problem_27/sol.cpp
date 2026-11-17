#include "../input.h"
#include "../string_lib.h"

int main ()
{
    char c = readChar();
    swapCaseByRef(c);
    std::cout << c << "\n";
}