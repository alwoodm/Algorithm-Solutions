# School Injustice

In a classroom at a special school¹, students face what they consider an unfair system during classroom entry. Instead of following the natural order of their register numbers (1 to n), the teacher creates a custom sequence - a permutation of these numbers. Each student keeps track of how many classmates with higher register numbers entered before them.

Write a program to calculate, for each student, the count of higher-numbered students who entered the classroom before them.

## Input

- First line: One integer n (1 ≤ n ≤ 100) - the number of students
- Second line: n space-separated integers from 1 to n - the order of entry

## Output

One line with n space-separated integers: for each student, the count of higher-numbered students who entered before them.

## Examples

```
Input:
5
2 1 5 3 4

Output:
0 1 0 1 1
```

Explanation: Before 2 and 5: zero higher numbers. Before 1: number 2. Before 3 and 4: number 5.

```
Input:
5
5 4 3 2 1

Output:
0 1 2 3 4
```

Explanation: Before 1, there are four higher numbers (5,4,3,2).

¹A school for young witches.

**Difficulty**: Medium (3/5)
