#include "../input.h"
#include "../string_lib.h"
#include "../vector_lib.h"
#include <string>

int main ()
{
    std::vector <std::string> vWords = {"Mohamed", "Ebrahim", "Mohamed", "Atia"};
    std::string Sep = ", ";

    std::string s = Join(vWords,Sep);
    
    std::cout << "joined text = " << s << "\n";
}