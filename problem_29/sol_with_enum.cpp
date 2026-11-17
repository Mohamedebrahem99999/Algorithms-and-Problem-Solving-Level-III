#include "../input.h"
#include "../MyLib.h"
#include <string>
enum enWhatToCount {Small,Capital,All};

short countLetterCase(const std::string s, enWhatToCount WhatToCount = enWhatToCount::All)
{
    short Count = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(WhatToCount == enWhatToCount::All)
            return s.length();
            
        if( isUpper(s[i]) && WhatToCount == enWhatToCount::Capital)
            Count++;

        else if( isLower(s[i]) && WhatToCount == enWhatToCount::Small)
            Count++;   
    }
    return Count;
}

int main ()
{
    std::string s = getText("Please Enter the text\n");

    short NumberOfSmallLetters = countLetterCase(s,enWhatToCount::Small);
    std::cout << "Number of small letters\n";
    std::cout << NumberOfSmallLetters << "\n";

    short NumberOfCapLetters = countLetterCase(s,enWhatToCount::Capital);
    std::cout << "Number of capital letters\n";
    std::cout << NumberOfCapLetters << "\n";
}