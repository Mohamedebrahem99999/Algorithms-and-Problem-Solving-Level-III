#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include <string>
#include <set>
#include "../array_library.h"
#include "../input.h"
#include "../MyLib.h"

int main ()
{
    int SeriesLength = readPositiveNumber("Enter the Length of the series: ");
    generateFibSeriesWithLoop(SeriesLength);
}