#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include <string>
#include "../array_library.h"
#include "../input.h"

bool isSparseMatrix(int Rows, int Columns, int NumberOfZeros)
{
    int TotalNumberOfElements = Rows * Columns;
    if (NumberOfZeros > TotalNumberOfElements/2)
        return true;
    return false;
}

void printSparseResult(int Arr[3][3])
{
    int NumberOfZeros = countNumberInMatrix(Arr,0);

    if (isSparseMatrix(3,3,NumberOfZeros))
        std::cout << "Yes: It is Sparse\n";
    else
        std::cout << "No: It's NOT Square\n";
}

int main ()
{
    int Target = 0;
    int Arr[3][3] = 
    {
        {1,2,0},
        {0,1,0},
        {0,0,1}
    };
    printMatrixElements(Arr);
    printSparseResult(Arr);
}