# Problem #08: Multiply Two Matrices

## Problem Statement

Write a program to fill two 3x3 matrices with random numbers, then multiply them into a 3rd matrix and print it.

## Example Output

```
Matrix1:
08   07   07
01   06   01
10   01   09

Matrix2:
04   05   06
04   05   08
06   08   01

Results:
32   35   42
04   30   08
60   08   09
```

## Notes

- Both matrices are filled with random numbers.
- The example output multiplies matching positions (element-wise): `Result[i][j] = Matrix1[i][j] * Matrix2[i][j]`. For example, `8 * 4 = 32` and `7 * 5 = 35`.
- This is different from standard matrix multiplication (row by column), where `Result[i][j]` is the sum of `Matrix1[i][k] * Matrix2[k][j]` over `k`. Follow the lecture's example unless told otherwise
