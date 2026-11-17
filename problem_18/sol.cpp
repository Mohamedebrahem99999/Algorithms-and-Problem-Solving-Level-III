#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include <string>
#include <set>
#include "../array_library.h"
#include "../input.h"

void printIntersectedElements(std::set<int> & IntersectNums)
{
    for (int Num : IntersectNums)
    {
        std::cout << Num << " ";
    }
    std::cout << "\n";
}

int main ()
{
    // int Target = readNumber("Please Enter the number to look for in matrix? :");
    //srand((unsigned)time(NULL));
    std::set<int> IntersectedNums;
    int Matrix1[3][3];
    fillMatrixWithRandomNumbers(Matrix1,10,1);
    std::cout << "Matrix 1 elements\n";
    printMatrixElements(Matrix1);
    int Matrix2[3][3];
    fillMatrixWithRandomNumbers(Matrix2,10,1);
    std::cout << "Matrix 2 elements\n";
    printMatrixElements(Matrix1);

    getIntersectedNums(Matrix1, Matrix2, IntersectedNums);
    if(IntersectedNums.size())
    {
        std::cout << "Intersected Numbers are: \n";
    }
    else
    {
        std::cout << "No intersected elements found\n";
    }
    printIntersectedElements(IntersectedNums);
}