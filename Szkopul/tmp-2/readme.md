# Temperatures

## Problem Description
Bajtek is learning to identify various weather phenomena in his nature class. One of his assignments is to record the temperature daily. Bajtek has diligently written down numbers on a piece of paper each day. Now he's looking at his results and wondering how many times and on which days he recorded a specific temperature. Can you help him?

## Input
- First line: one integer `n` (1 ≤ n ≤ 10³) - the number of measurement days
- Second line: `n` integers `ti` (-50 ≤ ti ≤ 100) - temperatures recorded on consecutive days
- Third line: one integer `x` (-50 ≤ x ≤ 100) - the temperature we're looking for

## Output
One line containing:
- Number of days `k` when temperature `x` was measured
- Followed by `k` numbers indicating the day numbers when temperature `x` was measured
- Numbers should be in ascending order, separated by single spaces

## Example
### Input
```
5
-2 0 1 -2 3
-2
```
### Output
```
2 1 4
```

**Difficulty**: Easy (2/5)