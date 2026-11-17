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
   int Matrix[5][5] = {
    {1, 2, 3, 2, 1},
    {4, 5, 6, 5, 4},
    {7, 8, 9, 8, 7},
    {3, 6, 0, 6, 3},
    {2, 4, 8, 4, 3}
};
    
    if (isPalindrome(Matrix,5,5))
        std::cout << "Palindrome\n";
    else
        std::cout << "Not Palindrome\n";
}