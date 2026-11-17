#include "../input.h"
#include "../Banking_System_Project/Bank_Functions_Library.h"
#include <string>

int main ()
{
    stClinetData ClientData;
    ClientData = fillstClintData();
    std::cout << convertDataRecordToOneLine(ClientData) << "\n"; 
}