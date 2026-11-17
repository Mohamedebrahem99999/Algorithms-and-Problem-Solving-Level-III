#include "../input.h"
#include "../Banking_System_Project/Bank_Functions_Library.h"
#include <string>
#include "../string_lib.h"
#include "../vector_lib.h"

int main ()
{
    std::string LineData = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079939999#//#5000.000000";
    std::vector <std::string> vDataElements;
    vDataElements = Split(LineData,"#//#");
    printVectorElements(vDataElements);
    stClinetData ClientData = fillstClintData(vDataElements);
    printClientRecord(ClientData);
}