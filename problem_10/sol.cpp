#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include "../array_library.h"

int main ()
{
    srand((unsigned)time(NULL));
    int Arr[3][3];

    fillMatrixWithRandomNumbers(Arr,10,1);
    printMatrixElements(Arr);
    std::cout << "____________\n";
    std::cout << "Sum of Matrix is: " << getSumArrTwoD(Arr) << "\n";
}