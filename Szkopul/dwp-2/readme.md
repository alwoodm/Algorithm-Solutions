# Two Divisors

## Problem Description
Write a program that reads a positive integer n and lists all pairs of its divisors (p1, p2) such that p1 · p2 = n and p1 ≤ p2. The pairs should be listed in order of increasing divisors p1.

## Input
The first and only line of input contains a natural number n in the range from 2 to 1,000,000.

## Output
The program should print lines of text containing consecutive pairs of divisors as described in the task (separated by a single space).

## Examples

### Example 1
Input:
```
100
```
Output:
```
1 100
2 50
4 25
5 20
10 10
```

### Example 2
Input:
```
37
```
Output:
```
1 37
```

## Difficulty
Easy (2/5)

## Solution Approach
1. Iterate through potential divisors p1 from 1 to √n
2. For each p1 that divides n without remainder, calculate p2 = n/p1
3. If p1 ≤ p2, print the pair (p1, p2)