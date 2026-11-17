#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include "../array_library.h"

int main ()
{
    srand((unsigned)time(NULL));
    int Arr[3][3] = 
    {
        {6,0,0},
        {0,6,0},
        {0,0,6}
    };
    printMatrixElements(Arr);
    printIsScalarResult(Arr);
}