#include "../input.h"
#include "../string_lib.h"
#include "../vector_lib.h"
#include <string>

int main ()
{
    std::string s = getText("Please Enter the text \n");
    std::cout << "Words in the string are \n";
    std::vector<std::string> vWords = Split(s," ");
    printf("Tokens = %d\n", vWords.size());
    printVectorElements(vWords);
}