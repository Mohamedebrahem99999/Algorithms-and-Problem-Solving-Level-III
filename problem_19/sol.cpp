#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include <string>
#include <set>
#include "../array_library.h"
#include "../input.h"

int main ()
{
    int Arr[3][3];
    fillMatrixWithRandomNumbers(Arr,10,1);
    int Min = getMinElement(Arr);
    printf("Minimum Number is: %d\n", Min);
    int Max = getMaxElement(Arr);
    printf("Maaximum Number is: %d\n", Max);
}