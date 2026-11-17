# Problem #14: Check Scalar Matrix

## Problem Statement

Write a program to check if the matrix is Scalar or not.

## Example Output

```
Matrix1:
9   0   0
0   9   0
0   0   9

YES: Matrix is scalar.
```

## Notes

- A scalar matrix is a square matrix where all elements on the main diagonal are the same value, and every other element is `0`.
- Diagonal elements: `Matrix[i][j]` where `i == j` must all equal the first diagonal element `Matrix[0][0]`.
- All other elements: `Matrix[i][j]` where `i != j` must be `0`.
- An identity matrix is a special case of a scalar matrix, where the diagonal value is `1`.
