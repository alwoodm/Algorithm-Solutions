# Gallery Break-in

At the Royal Art Gallery in Bitawa, there was a break-in and theft of a certain number of paintings.

All paintings in the collection were cataloged: they were assigned consecutive numbers starting from a certain integer x. For example, if x = 4 and there were 5 paintings in the gallery, they would have numbers 4, 5, 6, 7, and 8.

After the break-in, n paintings with numbers a1, a2, ..., an remain in the gallery. Your task is to calculate the minimum possible number of stolen paintings. Unfortunately, the gallery staff doesn't remember either the value of the initial number x or the number of paintings in the gallery before the break-in.

## Input

The first line of input contains a positive natural number n (1 ≤ n ≤ 1000) - the number of paintings in the gallery after the break-in.

The next line contains natural numbers a1, a2, ..., an (1 ≤ ai ≤ 10^9) - the numbers of the remaining paintings. They are given in random order and are all different from each other.

The numbers in the line are separated by single spaces.

## Output

The program should output the minimum number of stolen paintings.

## Example

For the input:
```
4
10 13 12 8
```

The correct output is:
```
2
```

(Paintings 9 and 11 were stolen.)

For the input:
```
5
7 5 6 4 8
```

The correct output is:
```
0
```

(No paintings were stolen.)

## Difficulty
3/5 (medium)