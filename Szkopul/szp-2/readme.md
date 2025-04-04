# Pioter's Cipher

## Problem Description
Pioter, an aspiring radio operator, created a unique text encryption method. The method involves swapping pairs of letters throughout a message. For example, using the pair 'hw', the text "waka-waka-huhu" becomes "haka-haka-wuwu".

The cipher uses three pairs of letters (6 different letters total) for substitution. Hyphens (-) represent spaces and remain unchanged.

## Input
- First line: Three letter pairs for substitution, separated by spaces
- Second line: The message to encrypt (max 10^5 characters)
- Input contains only lowercase Latin letters and hyphens

## Output
One line containing the encrypted message.

## Example
```
Input:
bk au mp
babaryba-bum-bum

Output:
kukuryku-kap-kap
```

*Difficulty: 2/5 (Easy)*
