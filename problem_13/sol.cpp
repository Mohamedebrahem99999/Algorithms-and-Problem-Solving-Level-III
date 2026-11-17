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
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };
    printMatrixElements(Arr);
    printIsIdentityResult(Arr);
}