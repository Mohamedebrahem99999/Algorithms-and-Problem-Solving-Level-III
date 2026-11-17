# Problem #16: Check Sparse Matrix

## Problem Statement

Write a program to check if the matrix is Sparce or not.

## Example Output

Example 1: not sparse

```
Matrix1:
10   0   12
20   15  1
0    0   9

No: It's NOT Sparce
```

Example 2: sparse

```
Matrix1:
0   0   12
0   0   1
0   0   9

Yes: It is Sparse
```

## Notes

- A sparse matrix is a matrix where most of the elements are `0`, meaning the number of zeros is more than half of the total number of elements.
- For a 3x3 matrix there are 9 elements, so it is sparse if it contains 5 or more zeros.
- Example 1 has 3 zeros out of 9, so it is not sparse. Example 2 has 6 zeros out of 9, so it is sparse.
