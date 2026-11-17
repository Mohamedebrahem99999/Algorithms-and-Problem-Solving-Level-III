#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include "../array_library.h"

void transposeMatrix(int Arr[3][3],int TransposedMatrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            TransposedMatrix[i][j] = Arr[j][i];
    }
}

int main ()
{
    srand((unsigned)time(NULL));
    int Arr1[3][3];
    int Arr2[3][3];
    fillArrayWithOrderedNumbers(Arr1);
    std::cout << "Original Matrix: \n\n";
    printMatrixElements(Arr1); 
    transposeMatrix(Arr1,Arr2);
    std::cout << "\n Transposed Matrix: \n\n";
    printMatrixElements(Arr2);
    std::cout << "\n";
}