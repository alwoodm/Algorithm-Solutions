# The Cashier

Janusz started working in a prestigious and exposed position: as a cashier at "Biedronka". His working day lasts L minutes. Since shoppers liked the friendly Janusz, a group of n regular customers (conveniently numbered from 1 to n) was immediately established, coming at fixed, strictly defined times. A customer with number i always comes after ti minutes after the start of Janusz's shift and takes li minutes to serve. You can be sure that no other customer will appear while a given customer is being served.

Janusz is an avid smoker - one "smoke break" takes him a minutes. Such breaks can follow one another, but cannot overlap with the time intended for serving subsequent customers. How many such breaks can Janusz allow himself during a working day?

## Input

The first line of input data contains three natural numbers n, L, and a (0 ≤ n ≤ 10^5, 1 ≤ L ≤ 10^9, 1 ≤ a ≤ L).

The next i-th line (i = 1, 2, ..., n) contains two natural numbers ti, li (0 ≤ ti ≤ L-1, 1 ≤ li ≤ L). It is guaranteed that ti + li ≤ ti+1 and tn + ln ≤ L.

Numbers in lines are separated by single spaces.

## Output

The program should output the maximum possible number of breaks.

## Examples

### Example 1
```
Input:
2 11 3
0 1
1 1

Output: 3
```
*Explanation: Breaks can be taken after 2, 5, and 8 minutes.*

### Example 2
```
Input:
0 5 2

Output: 2
```
*Explanation: Breaks can be taken after 0 and 2 minutes.*

### Example 3
```
Input:
1 3 2
1 2

Output: 0
```
*Explanation: No breaks are possible in this case.*

## Difficulty 
Medium
