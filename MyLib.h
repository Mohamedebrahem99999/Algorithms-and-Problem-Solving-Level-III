#include <iostream>
void generateFibSeriesWithLoop(int Length)
{
    int FibNumber;
    int PrePrev = 0;
    int Prev = 1;
    for (int i = 0; i < Length; i++)
    {
        FibNumber = Prev+PrePrev;
        std::cout << FibNumber << " ";
        PrePrev = Prev;
        Prev = FibNumber;
    }
}

void generateFibSeriesWithRecursion(int Length,int Prev,int PrePrev)
{
    if(Length < 1)
        return;
    std::cout << Prev << " ";
    generateFibSeriesWithRecursion(Length-1,PrePrev+Prev,Prev);
}