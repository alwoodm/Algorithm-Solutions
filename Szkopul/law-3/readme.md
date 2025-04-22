# Benches in the Park

Brajanek went for a walk in the park. He sat down for a moment on a park bench and observed the people walking by.

There are n benches in the park, numbered from 1 to n. When Brajanek began his observations, there were ai people sitting on the i-th bench. m people have just arrived at the park, and each would like to find a place on a bench.

Let k denote the maximum number of people sitting on one bench (after the arrival of these additional m people). What is the minimum and what is the maximum value of k?

## Input

The first line of input contains one natural number n - the number of benches in the park (1 ≤ n ≤ 100).

The second line of input contains the number m - the number of people who came to the park (1 ≤ m ≤ 10000).

The next n lines contain one natural number ai each - this is the number of people sitting on the i-th bench before the arrival of additional people (1 ≤ ai ≤ 100, i = 1, 2, ..., n).

## Output

The program should output two natural numbers separated by a single space: the minimum and maximum value of the number k specified in the problem statement.

## Examples

### Example 1
Input:
```
4
6
1
1
1
1
```

Output:
```
3 7
```

### Example 2
Input:
```
1
10
5
```

Output:
```
15 15
```

### Example 3
Input:
```
3
6
1
6
5
```

Output:
```
6 12
```

### Example 4
Input:
```
3
7
1
6
5
```

Output:
```
7 13
```

**Difficulty**: 3/5 (medium)