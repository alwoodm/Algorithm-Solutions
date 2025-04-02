# Closest Palindrome

Available memory: 32MB

## Problem Description

Little Bitek read on Wikipedia: Palindrome (Greek palindromeo - to run back) - an expression that reads the same from left to right and from right to left. Janek quickly created one palindrome (considering only letters): "U Izydy żądze na wyrku co noc ukrywane, zdąży Dyziu?" (which is a Polish palindrome). Then he started creating many more. Unfortunately, he's having much more difficulty with numbers. He would like to quickly convert any number (if it's not already a palindrome) to the closest larger palindrome. Can you help him?

## Input

The first line of input contains an integer k (10 ≤ k ≤ 1,000,000) to be converted to a palindrome.

## Output

The program should output a single integer - the smallest possible non-negative number that needs to be added to the given number to obtain a palindrome.

## Examples

### Example 1

Input:
```
150
```

Output:
```
1
```

### Example 2

Input:
```
55555
```

Output:
```
0
```

### Example 3

Input:
```
142
```

Output:
```
9
```

## Difficulty
2/5 (easy-medium)