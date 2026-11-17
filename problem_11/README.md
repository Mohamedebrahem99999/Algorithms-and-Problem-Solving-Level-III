# problem#12 Compare Two Matrices (Typical or Not)

## Problem Statement

Write a program to compare two matrices and check if they are typical or not.

## Example Output

```
Matrix1:
06   03   06
04   05   09
03   04   04

Matrix2:
08   09   06
06   08   06
09   03   05

No: martices are NOT typical.
```

## Notes

- "Typical" here means identical: every element must match its counterpart at the same position, `Matrix1[i][j] == Matrix2[i][j]` for all `i` and `j`.
- As soon as one pair of elements differs, the matrices are not typical.
- If all elements match, the program should print a message saying the matrices are equal.
