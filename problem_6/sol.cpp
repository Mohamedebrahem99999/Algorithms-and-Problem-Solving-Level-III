#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include "../array_library.h"

int main ()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    fillArrayWithOrderedNumbers(arr);
    printMatrixElements(arr); 
}