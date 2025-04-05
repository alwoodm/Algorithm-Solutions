# Party Master
Memory limit: 32MB

## Problem Description
Janek organized a party and wants to choose a party master - someone who is liked by as many participants as possible. Help him identify this person and find all the people who like them.

## Input
- First line: two integers `n` and `m` (2 ≤ n ≤ 10,000, 2 ≤ m ≤ 1,000,000)
    - `n` - number of party participants
    - `m` - number of mutual friendships
- Next `m` lines: two integers `ui` and `vi` (1 ≤ ui, vi ≤ 10,000)
    - Each line represents two people who mutually like each other

## Output
- First line: one integer - the ID of the most liked person (party master)
    - If multiple people have the same maximum number of likes, output the lowest ID
- Second line: space-separated integers in ascending order - IDs of all people who like the party master

## Example
```
Input:
5 4
1 3
2 3
4 2
5 2

Output:
2
4 5
```

## Difficulty
Medium (3/5)