#include "../input.h"
// #include "../string_lib.h"
#include <string>

int getNumberOfWordsInString(std::string Text)
{
    int NumberOfWords = 0;
    int Pos;
    std::string delim = " ";
    std::string sWord;
    while((Pos = Text.find(delim)) != std::string::npos)
    {
        sWord = Text.substr(0, Pos);
        Text.erase(0,Pos + delim.length());
        NumberOfWords++;
    }
    if(Text != "")
    {
        NumberOfWords++;
    }
    return NumberOfWords;
}

int main ()
{
    std::string s = getText("Please Enter the text \n");
    short NumberOfWordsInString = getNumberOfWordsInString(s);
    std::cout << "Number of words in the string\n";
    std::cout << NumberOfWordsInString << "\n";
}