# Binary Letters

## Problem Description
Given a scrambled string containing letters from the set {d, e, j, n, o, r, z}, decode it to form the largest possible binary number. The original message consists of words "zero" (representing 0) and "jeden" (representing 1), but their letters have been randomly rearranged.

## Task Details
- Input consists of a single line containing a non-empty string
- String contains only lowercase letters from {d, e, j, n, o, r, z}
- Maximum string length is 100,000 characters
- The letters can always be rearranged to form valid words ("jeden" and "zero")
- No letters will be left unused

## Input Format
A single line containing the scrambled string.

## Output Format
One line containing the largest possible binary number that can be created.

## Examples

### Example 1
```
Input: zjenedore
Output: 10
```
Explanation: The letters can be rearranged to form "jedenzero" (1 0)

### Example 2
```
Input: zorrodejenerzeze
Output: 1000
```
Explanation: The letters can be rearranged to form "jedenzerozerozero" (1 0 0 0)

## Difficulty
Medium (3/5)