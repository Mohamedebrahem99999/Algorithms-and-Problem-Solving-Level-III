
# Problem #20: Check Palindrome Matrix

## Problem Statement

Write a program to check if the matrix is Palindrome or not.

## Example Output

Example 1: palindrome

```
Matrix1:
1   2   1
5   5   5
7   3   7

Yes: Matrix is Palindrome
```

Example 2: not palindrome

```
Matrix1:
1   2   1
5   5   5
7   3   8

No: Matrix is NOT Palindrome
```

## Notes

- In these examples, a matrix is a palindrome when every row reads the same from left to right and from right to left.
- For a 3x3 matrix, this means `Matrix[i][0] == Matrix[i][2]` for every row `i`.
- In Example 2, the last row `7 3 8` is not a palindrome, so the whole matrix is not.
