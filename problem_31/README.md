# Problem #31: Count Letters (Match Case or Not)

## Problem Statement

Write a program to read a string and read a character then count the character in that string (Match Case or Not).

## Example Output

```
Please Enter Your String?
Mohammed Abu-Hadhoud Programming Advices

Please Enter a Character?
m

Letter 'm' Count = 4
Letter 'm' Or 'M' Count = 5
```

## Notes

- The program prints two counts for the same character: one that matches the case exactly, and one that ignores case.
- In the example, the string has four lowercase `m` letters (two in `Mohammed`, two in `Programming`) and one capital `M` at the start of `Mohammed`.
- Match case: `4`. Ignoring case (`m` or `M`): `4 + 1 = 5`.
- This extends Problem #30, which only counts with the case matched.
