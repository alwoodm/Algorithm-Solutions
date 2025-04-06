# Antique Collection - Bargaining Challenge

## Problem Description
Janusz plans to improve his social standing by collecting antiques, starting with a statuette for his fireplace. He needs to find antique dealers in the city who offer items within his budget for negotiation.

## Task
Write a program to determine which antique dealers Janusz can negotiate with, based on his budget and their offerings.

### Input
- First line: two numbers `n` and `k`
    - `n` (1 ≤ n ≤ 50) - number of dealers
    - `k` (10^4 ≤ k ≤ 10^6) - Janusz's budget

- Next `n` lines: each dealer's inventory
    - First number `z` (1 ≤ z ≤ 50) - number of antiques
    - Following `z` numbers - prices of antiques (10^4 ≤ price ≤ 10^6)

### Output
- First line: number of dealers Janusz can negotiate with
- Second line (if applicable): dealer numbers in ascending order

## Examples

### Example 1
```
Input:
3 50000
1 40000
2 20000 60000
3 10000 70000 190000

Output:
3
1 2 3
```

### Example 2
```
Input:
3 50000
1 50000
3 100000 120000 110000
3 120000 110000 120000

Output:
0
```

## Difficulty
🌟🌟⭐⭐⭐ (2/5) - Easy-Medium
