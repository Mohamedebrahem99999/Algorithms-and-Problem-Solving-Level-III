# Problem #18: Intersected Numbers

## Problem Statement

Write a program to print the intersected numbers in two given matrices.

## Example Output

```
Matrix1:
77   5    12
22   20   1
1    0    9

Matrix2:
5    80   90
22   77   1
10   8    33

Intersected Numbers are:
77   5   22   1   1
```

## Notes

- The program goes through every element of Matrix1 and checks whether that number exists anywhere in Matrix2.
- Every number that is found in both matrices is printed.
- In the example, the output follows the order of Matrix1 (row by row), and `1` appears twice because Matrix1 contains `1` two times and both are found in Matrix2.
