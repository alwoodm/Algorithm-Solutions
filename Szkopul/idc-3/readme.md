# Witch's Name

## Problem Description

Dżesika is learning witchcraft at a school for young girls. Each student must choose a name (operational codename) that:
- Has exactly 11 letters
- Begins with the same letter as the student's real name

The students are given text fragments from which they need to remove unnecessary letters to create their codename.

## Task

Write a program to determine if it's possible to create a valid name from a given text.

## Input

- First line: number of test cases `n` (1 ≤ n ≤ 100)
- Next `n` lines: two strings separated by a space
    - First string: the girl's real name (up to 15 characters)
    - Second string: the text to be processed (up to 1000 characters)

## Output

For each test case, print:
- "YES" if it's possible to create a valid name
- "NO" if it's not possible

## Examples

### Input
```
4
DZESIKA DUMDUMWAKAWAKABUMBUM
ANGELA ALFABETAGAMMADELTA
APENINA BARBIEIKENTOPARA
KORDYLIERA BRACIAKARAMAZOW
```

### Output
```
YES
YES
YES
NO
```

## Explanation

1. From "DUMDUMWAKAWAKABUMBUM", Dżesika can create an 11-letter name starting with 'D'
2. From "ALFABETAGAMMADELTA", Angela can create an 11-letter name starting with 'A'
3. From "BARBIEIKENTOPARA", Apenina can create an 11-letter name starting with 'A'
4. From "BRACIAKARAMAZOW", Kordyliera cannot create an 11-letter name starting with 'K'

## Difficulty
Medium