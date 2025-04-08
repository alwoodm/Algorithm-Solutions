# Character Duplication

Write a program that reads n words and duplicates characters in each of them:
- First character is printed as is
- Second character is printed twice
- Third character is printed three times
- And so on...

## Input
- First line: One integer n (1 ≤ n ≤ 1000) - number of words
- Next n lines: One word per line in lowercase Latin alphabet (length: 1-30 characters)

## Output
For each input word, output one line containing the word processed according to the duplication rules.

## Example
Input:
```
3
abcabc
xyztw
aaaa
```

Output:
```
abbcccaaaabbbbbcccccc
xyyzzzttttwwwww
aaaaaaaaaa
```

## Difficulty
2/5 (Easy)