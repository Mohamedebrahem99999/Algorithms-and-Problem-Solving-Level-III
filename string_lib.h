#include <string>
#include <vector>

void printFirstLetterOfEachWord(std::string Text)
{
    bool IsFirstLetter = true;
    for (short i = 0; i < Text.length();i++)
     {
        if (Text[i] != ' ' && IsFirstLetter)
            std::cout << Text[i] << "\n";
        IsFirstLetter = (Text[i] == ' ')?true:false;
    }
}

void upperFirstLetterOfEachWord(std::string & Text)
{
    bool IsFirstLetter = true;
    for (short i = 0; i < Text.length();i++)
     {
        if (Text[i] != ' ' && IsFirstLetter)
            Text[i] = toupper(Text[i]);
        IsFirstLetter = (Text[i] == ' ')?true:false;
    }
}

void lowerFirstLetterOfEachWord(std::string & Text)
{
    bool IsFirstLetter = true;
    for (short i = 0; i < Text.length();i++)
     {
        if (Text[i] != ' ' && IsFirstLetter)
            Text[i] = tolower(Text[i]);
        IsFirstLetter = (Text[i] == ' ')?true:false;
    }
}

void lowerString(std::string & Text)
{
    for (short i = 0; i < Text.length();i++)
     {
            Text[i] = tolower(Text[i]);
    }
}

void upperString(std::string & Text)
{
    for (short i = 0; i < Text.length();i++)
    {
        Text[i] = toupper(Text[i]);
    }
}

bool isUpper(const char c)
{
    return int(c) >= 65 && int(c) <= 90;
}

bool isLower(const char c)
{
    return int(c) >= 97 && int(c) <= 122;
}

void toUpperByRef(char & c)
{
    if (int(c) >= 97 && int(c) <= 122)
        c = char(int(c) - 32);
}

void toLowerByRef(char & c)
{
    if (isUpper(c))
        c = char(int(c) + 32);
}

void swapCaseByRef(char &c)
{
    if (isUpper(c))
        toLowerByRef(c);

    else if (isLower(c))
        toUpperByRef(c);
}

void swapStringCaseByRef(std::string &s)
{
    for (int i = 0; i < s.length();i++)
    {
        swapCaseByRef(s[i]);
    }
}

short countCapLetters(const std::string &s)
{
    short NumberOfCapitalLetters = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(isUpper(s[i]))
            NumberOfCapitalLetters++;
    }
    return NumberOfCapitalLetters;
}

short countSmallLetters(const std::string &s)
{
    short NumberOfSmallLetters = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(isLower(s[i]))
            NumberOfSmallLetters++;
    }
    return NumberOfSmallLetters;
}

std::string upperCaseString(std::string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}

short countLetterCaseSensitive(const std::string &s, char& Letter)
{
    short Count = 0;
    for(int i = 0; i < s.length();i++)
    {
        if (s[i] == Letter)
            Count++;
    }
    return Count;
}

short countLetterCaseInsensitive(const std::string &s,const char &Letter)
{
    short Count = 0;
    for(int i = 0; i < s.length();i++)
    {
        if (tolower(s[i]) == tolower(Letter))
            Count++;
    }
    return Count;
}

short countLetters(const std::string &s, const char &Letter,bool MatchCase = true)
{
    short Count = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(MatchCase)
        {
            if (s[i] == Letter)
                Count++;
        }
        else
        {
            if (tolower(s[i]) == tolower(Letter))
                Count++;
        }
    }
    return Count;
}

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c =='i' || c == 'o' || c == 'u';
}

short countVowels(std::string s)
{
    short Count = 0;
    for (int i = 0 ; i < s.length(); i++)
    {
        if(isVowel(s[i]))
            Count++;
    }
    return Count;
}

void printVowels(std::string s)
{
    for (int i = 0 ; i < s.length(); i++)
    {
        if(isVowel(s[i]))
            std::cout << s[i] << " ";
    }
}

void printEachWordInString(std::string Text)
{
    std::string delim = " ";
    std::cout << "Your string words are: \n\n";

    short Pos = 0;
    std::string sWord; // define a string variable
    // use find() functio to get the position of the delimiters
    while ((Pos = Text.find(delim)) != std::string::npos)
    {
        sWord = Text.substr(0,Pos); // store the word
        if (sWord != "")
        {
            std::cout << sWord << "\n";
        }
        Text.erase(0,Pos+delim.length()); /* Erase until position and move to the next word */

        if(Text != "")
        {
            std::cout << Text << "\n"; // It prints the last word in the string
        }
    }
}


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

// std::vector<std::string> Split(std::string &Text, std::string delim)
// {
//     std::vector<std::string> vWords;
//     int Pos;
//     std::string sWord;
//     while((Pos = Text.find(delim)) != std::string::npos)
//     {
//         sWord = Text.substr(0,Pos);
//         vWords.push_back(sWord);
//         Text.erase(0,Pos+delim.length());
//     }

//     if(Text != "")
//         vWords.push_back(Text);
    
//     return vWords;
// }

std::vector <std::string> Split(std::string S, std::string Sep)
{
    std::vector <std::string> vWords;
    std::string Result = "";
    for(int i = 0; i < S.length();)
    {
        bool IsMatch = true;

        for(int j = 0; j < Sep.length();j++)
        {
            if ((i+j) >= S.length() || S[i+j] != Sep[j])
            {
                IsMatch = false;
                break;
            }
        }

        if(IsMatch)
        {
            vWords.push_back(Result);
            Result = "";
            i += Sep.length();
        }
        else
        {
            Result += S[i];
            i++;
        }        
    }
    vWords.push_back(Result);
    return vWords;;
}

std::string TrimLeft(std::string s)
{  
    for (short i = 0; i < s.length();i++)
    {
        if (s[i] != ' ')
            return s.substr(i,s.length()-1);
    }
    return "";
}

std::string TrimRight(std::string s)
{
    for (short i = s.length()-1; i >= 0;i--)
    {
        if (s[i] != ' ')
            return s.substr(0,i);
    }
    return "";
}

std::string TrimAll( std::string s)
{
    s = TrimLeft(s);
    s = TrimRight(s);
    return s;
}

std::string Join(std::vector <std::string> vWords,std::string Sep)
{
    std::string s = "";
    for (int i = 0; i < vWords.size();i++)
    {
        s += vWords[i];
        if (i != vWords.size()-1)
            s += Sep;
    }
    return s;
}

std::string Join(std::string S[], int Length, std::string Sep)
{
    std::string s = "";
    for (int i = 0; i < Length;i++)
    {
        s += S[i];
        if (i != Length-1)
            s += Sep;
    }
    return s;
}

// std::string reverseString(std::string S)
// {
//     std::vector <std::string> vWords = Split(S," ");
//     std::string ReversedString = "";
    
//     for(int i = vWords.size()-1; i >= 0; i--)
//     {
//         ReversedString = ReversedString + vWords[i];
//         if(i != 0)
//         {
//             ReversedString = ReversedString + " ";
//         }
//     }
//     return ReversedString;
// }

std::string reverseString(std::string S)
{
    std::vector <std::string> vWords = Split(S," ");
    std::string ReversedString = "";
    std::vector<std::string>::iterator iter = vWords.end();
    
    while (iter != vWords.begin())
    {
        --iter;
        ReversedString += *iter + " ";
    }
    return ReversedString.substr(0,ReversedString.length()-1);
}

// std::string Replace(std::string S, std::string OldVal, std::string NewVal)
// {
//     std::vector <std::string> vWords = Split(S," ");
//     for (int i = 0; i < vWords.size(); i++)
//     {
//         std::string Word = vWords[i];
//         if (Word == OldVal)
//             vWords[i] = NewVal;
//     }
//     return Join(vWords, " ");
// }

std::string Replace (std::string S, std::string OldText, std::string NewText )
{
    std::string Result = "";
    for (int i = 0; i < S.length();)
    {
        bool IsMatch = true;
        for (int j = 0; j < OldText.length(); j++)
        {
            if ( i + j > S.length() || OldText[j] != S[i+j])
            {
                IsMatch = false;
                break;
            }
        }
        if (IsMatch)
        {
            Result += NewText;
            i += OldText.length();
        }
        else
        {
            Result += S[i];
            i++;
        }
    }
    return Result;
}

std::string replaceMatchCase(std::string S, std::string OldText, std::string NewText)
{
    std::string Result = "";
    for (int i = 0; i < S.length();)
    {
        bool IsMatch = true;
        for (int j = 0; j < OldText.length(); j++)
        {
            if (i+j >= S.length() || S[i+j] != OldText[j])
            {
                IsMatch = false;
                break;
            }
        }

        if (IsMatch)
        {
            Result += NewText;
            i += OldText.length();
        }
        else
        {
            Result += S[i];
            i++;
        }
    }
    return Result;
}

std::string replaceDontMatchCase(std::string S, std::string OldText, std::string NewText)
{
    std::string Result = "";
    for (int i = 0; i < S.length();)
    {
        bool IsMatch = true;

        for (int j = 0; j < OldText.length();j++)
        {
            if ((i+j) >= S.length() || toupper(S[i+j]) != toupper(OldText[j]))
            {
                IsMatch = false;
                break;
            }
        }

        if (IsMatch)
        {
            Result += NewText;
            i += OldText.length();
        }
        else
        {
            Result += S[i];
            i++;
        }
    }
    return Result;
}

std::string removePunctuation(std::string OriginalString)
{
    std::string ResultString = "";
    for (char c : OriginalString)
    {
        if (!ispunct(c))
            ResultString += c;
    }
    return ResultString;
}