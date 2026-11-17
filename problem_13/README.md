
# Problem #13: Check Identity Matrix

## Problem Statement

Write a program to check if the matrix is identity or not.

## Example Output

```
Matrix1:
1   0   0
0   1   0
0   0   1

YES: Matrix is identity.
```

## Notes

- An identity matrix is a square matrix where every element on the main diagonal is `1` and every other element is `0`.
- Diagonal elements: `Matrix[i][j]` where `i == j` must be `1`.
- All other elements: `Matrix[i][j]` where `i != j` must be `0`.
- If any element breaks these rules, the matrix is not an identity matrix.
