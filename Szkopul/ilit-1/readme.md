# Letters in a Number

## Difficulty: Easy

## Problem Statement

Janek is studying the properties of numbers and is looking for numbers that, when written in hexadecimal form, contain at least one letter.

## Input

The first line of input contains a natural number less than a trillion.

## Output

Print "YES" if the hexadecimal representation contains letters, or "NIE" if it doesn't.

## Examples

### Example 1

```
Input:
54
Output:
NO
```

### Example 2

```
Input:
255
Output:
YES
```

## Solution

The solution involves converting the input number to hexadecimal representation and checking if it contains any letters (A-F).

In hexadecimal, the digits 10-15 are represented by letters A-F. Therefore, if a number in hexadecimal contains any of these letters, it means the number has at least one digit greater than or equal to 10 in its hexadecimal representation.

For example:
- 54 in hexadecimal is 36, which contains only digits, so the output is "NIE".
- 255 in hexadecimal is FF, which contains letters, so the output is "TAK".