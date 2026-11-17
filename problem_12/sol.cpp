#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include "../array_library.h"

int main ()
{
    srand((unsigned)time(NULL));
    int Arr1[3][3];
    fillMatrixWithRandomNumbers(Arr1,10,1);
    printMatrixElements(Arr1);
    std::cout << "|________|\n";

    int Arr2[3][3];
    fillMatrixWithRandomNumbers(Arr2,10,1);
    printMatrixElements(Arr2);

    areequal::printAreEqualResult(Arr1,Arr2);    
}