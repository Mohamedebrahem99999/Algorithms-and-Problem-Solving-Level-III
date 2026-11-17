# Problem #19: Minimum and Maximum Numbers in Matrix

## Problem Statement

Write a program to print the Minimum and Maximum Numbers in Matrix.

## Example Output

```
Matrix1:
77   5    12
22   20   6
14   3    9

Minimum Number is: 3

Max Number is: 77
```

## Notes

- Start by assuming the first element `Matrix[0][0]` is both the minimum and the maximum.
- Go through every element of the matrix: if it is smaller than the current minimum, update the minimum; if it is larger than the current maximum, update the maximum.
- In the example, the smallest number is `3` and the largest is `77`.
