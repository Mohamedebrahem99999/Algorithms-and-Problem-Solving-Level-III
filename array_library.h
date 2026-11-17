#include <cstdio>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <set>
#include "random.h"

void fillMatrixWithRandomNumbers(int arr[3][3], int To, int From)
{
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            arr[i][j] = generateRandomNumberInRange(To,From);
        }
    }
}

void printMatrixElements(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            // printf("%2d ", arr[i][j]);
            std::cout << std::setw(2) << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}


namespace rowsum
{

    void printRowSum(int arr[3][3])
    {
        int RowSum;
        for (int i = 0; i < 3; i++)
        {
            RowSum = 0;
            for (int j = 0; j < 3; j++)
            {
                RowSum += arr[i][j];
            }
            printf("Row %d Sum %d\n",i,RowSum);
        }
    }

    void getRowsSumInArray(int arr[3][3],int RowSumArr[3])
    {
        
        for (int i = 0; i < 3; i++)
        {
            RowSumArr[i] = 0;
            for (int j = 0; j < 3; j++)
            {
                RowSumArr[i] += arr[i][j];
            }
        }
    }

    void printRowsSumArray(int RowSumArr[3])
    {
        for (int i = 0; i < 3; i++)
            printf("Row %d Sum =  %d\n",i,RowSumArr[i]);
    }
}
namespace colsum
{
    int getColSum(int arr[3][3], int ColNumber, int Rows)
    {
        int ColSum = 0;
        for (int i = 0; i < Rows; i++)
        {
            ColSum += arr[i][ColNumber];
        }
        return ColSum;
    }

    void printColSum(int arr[3][3])
    {
        
        for (int i = 0; i < 3; i++)
        {
            printf("Column %d Sum %d\n",i+1,getColSum(arr,i,3));
        }
    }

    void fillColSumInArray(int arr[3][3], int ColSumArr[3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                ColSumArr[i] += arr[j][i];
            }
        }
    }

    void printColSumArrInArray(int ColSumArr[3])
    {
        for (int i = 0; i < 3; i++)
        {
            printf("Col %d Sum = %d\n", i ,ColSumArr[i]);
        }
    }
}

void fillArrayWithOrderedNumbers(int arr[3][3])
{
    short Counter = 0;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            Counter++;
            arr[i][j] = Counter;
        }
    }
}

void printArrCol(int Arr[3][3], int Col)
{
    for (int i = 0; i < 3;i++)
    {
        printf("%02d ",Arr[i][Col]);
    }
}

void printArrRow(int Arr[3][3], int Row)
{
    for (int i = 0; i < 3;i++)
    {
        printf("%02d ",Arr[Row][i]);
    }
}

int getSumArrTwoD(int Arr[3][3])
{
    int Sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Sum += Arr[i][j];
        }
    }
    return Sum;
}
namespace aretypical
{
    bool areTypical(int Arr1[3][3], int Arr2[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (Arr1[i][j] != Arr2[i][j])
                return false;
            }
        }
        return true;
    }

    void printAreTypicalResult(int Arr1[3][3], int Arr2[3][3])
    {
        if (areTypical(Arr1,Arr2))
            std::cout << "Array 1 and Array 2 are Typical\n";
        else
            std::cout << "Array 1 and Array 2 are not Typical\n";
    }
}

namespace areequal
{
    bool areEqual(int Arr1[3][3], int Arr2[3][3])
    {
        return getSumArrTwoD(Arr1) == getSumArrTwoD(Arr2);
    }

    void printAreEqualResult(int Arr1[3][3], int Arr2[3][3])
    {
        if (areEqual(Arr1,Arr2))
            std::cout << "Array 1 and Array 2 are Equal\n";
        else
            std::cout << "Array 1 and Array 2 are not Equal\n";
    }
}

bool isScalarMatrix(int Arr[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (Arr[i][j] != Arr[0][0])
                    return false;
            }
            else
            {
                if(Arr[i][j] != 0)
                    return false;
            }
        }   
    }
    return true;
}

void printIsScalarResult(int Arr[3][3])
{
    if (isScalarMatrix(Arr))
        std::cout << "The array is Scalar Matrix\n";
    else
    std::cout << "The array is not Scalar Matrix\n";
}

bool isIdentityMatrix(int Arr[3][3])
{
    if (! isScalarMatrix(Arr))
        return false;
    if (Arr[0][0] == 1)
        return true;
    else
        return false;
}

void printIsIdentityResult(int Arr[3][3])
{
    if (isIdentityMatrix(Arr))
        std::cout << "The array is Identity Matrix\n";
    else
    std::cout << "The array is not Identity Matrix\n";
}

short countNumberInMatrix(int Arr[3][3], int Target)
{
    short Count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Arr[i][j] == Target)
                Count++;
        }
    }
    return Count;
}

void printCountInMatrixResult(int Arr[3][3],int Target)
{
    printf("Number %d count in matrix is %d\n",Target,countNumberInMatrix(Arr, Target));

}

// void printeResult(std::string ArrayType, bool * ptr func)
// {
//     if 

// }

bool isExist(int Arr[3][3], int Target)
{
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if (Arr[i][j] == Target)
                return true;
        }
    }
   return false;

}
void printIsExist(int Arr[3][3], int Target)
{
    if (isExist(Arr,Target))
    {
        std::cout << "Yes it is there \n";
    }
    else
        std::cout << "No It is not there\n";
}

// bool isExist(int Arr[3][3], int Target)
// {
//     if (countNumberInMatrix(Arr,Target) > 0)
//         return true;
//     return false;
// }


void getIntersectedNums(int Arr1[3][3], int Arr2[3][3],std::set<int> &IntersectedNums)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(isExist(Arr2,Arr1[i][j]))
            {
                IntersectedNums.insert(Arr1[i][j]);
            }
        }
    }
}


int getMinElement(int Arr[3][3])
{
    int Min = Arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Arr[i][j] < Min)
                Min = Arr[i][j];
        }
    }
    return Min;
}

int getMaxElement(int Arr[3][3])
{
    int Max = Arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Arr[i][j] > Max)
                Max = Arr[i][j];
        }
    }
    return Max;
}

// bool isPalindrome(int Matrix[3][3])
// {
//     for(int i = 0; i < )
// 
// void fillArrayWithUserInput(int *arr,int Size)
// {
//     for(int i = 0; i < Size; i++)
//     {
//         for (int j = 0; j < Size; j++)
//         {
//             printf("Enter the element of the position %d %d",i,j);
//             arr[i][j] = readNumber();
//         }
//     }
// }
// for (int i = 0; i < )

bool isPalindrome(int Matrix[5][5],int Rows, int Columns)
{
    for(int i = 0; i < Rows; i++)
    {
        for(int j = 0; j < Columns/2;j++)
        {
            if(Matrix[i][j] != Matrix[i][Columns-(j+1)])
                return false;
        }
    }
    return true;
}