#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include "../array_library.h"

void fillArrayWithMulTwoMatrices(int Arr1[3][3], int Arr2[3][3], int ResArr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ResArr[i][j] = Arr1[i][j] * Arr2[i][j];
        }
    }
}

int main ()
{
    srand((unsigned)time(NULL));
    int Arr1[3][3];
    int Arr2[3][3];
    int ResArr[3][3];

    fillMatrixWithRandomNumbers(Arr1,10,1);
    std::cout << "Elements of the first Matrix\n";
    printMatrixElements(Arr1);
    std::cout << "____________\n";
    fillMatrixWithRandomNumbers(Arr2,10,1);
    std::cout << "Elements of the second Matrix\n";
    printMatrixElements(Arr2);
    std::cout << "____________\n";
    fillArrayWithMulTwoMatrices(Arr1,Arr2,ResArr);
    std::cout << "Result Matrix\n";
    printMatrixElements(ResArr);
    std::cout << "____________\n";
}