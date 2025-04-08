# Magical Doubling

## Problem Description

As you surely remember, Jessica (Brajanek's sister) is a student at a prestigious school for young witches. In her gastronomic magic classes, she learns many interesting and useful spells. She can already conjure a vegan pork chop or non-alcoholic calvados. Recently, she mastered a formula that, when spoken, doubles the number of chocolates in a magical box. In this way, she can get any amount of sweets, but she must have a certain number of chocolates to start with. For example, to get 9 chocolates, she puts one chocolate into the box, speaks the spell three times, and adds one more chocolate.

The rule is that you cannot produce sweets in this way without restraint, in advance - you must always end up with a predetermined number of chocolates in the box.

Jessica needs to prepare a significant amount of sweets for her greedy friends, so help her calculate how many chocolates she must have at the start.

## Input

The first and only line of input contains a natural number n (1 ≤ n ≤ 10^9) indicating the target number of chocolates.

## Output

The program should output a line of text containing the minimum number of chocolates that Jessica will have to put in the box.

## Examples

### Example 1

Input:
```
9
```

Output:
```
2
```

### Example 2

Input:
```
7
```

Output:
```
3
```

Explanation: Jessica puts in one chocolate, speaks the spell (there are now 2 chocolates in the box), puts in a second chocolate, speaks the spell (there are now 6 chocolates in the box), and adds the last chocolate.

### Example 3

Input:
```
12
```

Output:
```
2
```

Explanation: Jessica puts in a chocolate, speaks the spell, adds a chocolate (there are now 3 chocolates in the box), and speaks the spell twice, getting 12 chocolates.

## Difficulty
Medium (3/5)