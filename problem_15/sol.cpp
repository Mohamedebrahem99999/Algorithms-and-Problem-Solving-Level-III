#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include "../array_library.h"
#include "../input.h"

int main ()
{
    int Target = readNumber("Enter the number to count in the matrix: ");
    srand((unsigned)time(NULL));
    int Arr[3][3];
    fillMatrixWithRandomNumbers(Arr,10,1);
    printMatrixElements(Arr);
    printCountInMatrixResult(Arr,Target);   
}