# Game of Seven

Brajanek and Dżesika are playing a game of seven. The game works like this: one player provides the boundaries of an interval <a, b>, and the other player must quickly answer how many numbers in this interval are divisible by seven, or the sum of their digits is divisible by seven (or both).

Write a program that helps with such calculations.

## Input
The first and only line of input contains two natural numbers a, b - these are the boundaries of the interval (1 ≤ a < b ≤ 10^6). The numbers in the line are separated by a single space.

## Output
The program should print a line of text containing the number of numbers that meet the condition from the task content.

## Example
**Input:**
```
5 25
```

**Output:**
```
5
```

Numbers divisible by 7 are 7, 14, and 21, while numbers whose digit sum is divisible by 7 are 7 (we don't count it twice), 16, and 25.

## Difficulty
Easy (2/5)