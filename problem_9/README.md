# Problem#9 Print the Middle Row and Middle Column of a Matrix

## Problem Statement

Write a program to fill a 3x3 matrix with random numbers, print it, then print the middle row and middle col.

## Example Output

```
Matrix1:
01   10   07
10   03   02
06   03   09

Middle Row of Matrix1 is:
10   03   02

Middle Col of Matrix1 is:
10   03   03
```

## Notes

- The matrix is filled with random numbers.
- In a 3x3 matrix, the middle row is row index `1` and the middle column is column index `1` (zero-based).
- Middle row: `Matrix[1][0]`, `Matrix[1][1]`, `Matrix[1][2]`.
- Middle column: `Matrix[0][1]`, `Matrix[1][1]`, `Matrix[2][1]`

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
