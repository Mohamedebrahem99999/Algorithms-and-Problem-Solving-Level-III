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
    std::cout << "Middle Col of Matrix1 is \n";
    printArrCol(Arr,1);
    std::cout << "\nMiddle Row of Matrix1 is \n";
    printArrRow(Arr,1);
    std::cout << "\n";
}