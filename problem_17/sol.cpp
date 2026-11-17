#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include <string>
#include "../array_library.h"
#include "../input.h"

int main ()
{
    int Target = readNumber("Please Enter the number to look for in matrix? :");
    srand((unsigned)time(NULL));
    int Arr[3][3];
    fillMatrixWithRandomNumbers(Arr,10,1);
    std::cout << "Matrix Elements\n";
    printMatrixElements(Arr);
    printIsExist(Arr,Target);
}