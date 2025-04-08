# Shopping Fever

Halinka likes to shop at the nearby shopping mall, especially at the exclusive boutique "Spodlady" (The name sounds somewhat English to her). She buys clothes of all kinds there, taking advantage of various promotions offered by the store.

The boutique offers Halinka a deal: if she buys 'a' pieces of clothing at the normal price of 'c' bitalars, she will receive an additional 'b' pieces of merchandise completely free. This offer can be used any number of times.

Halinka is going shopping planning to spend 's' bitalars. Could you help her calculate the maximum number of clothes she can buy?

The girl plans to visit the boutique many times, with a separate promotion during each visit. During one visit, Halinka doesn't have to spend the full amount planned for that time.

## Input Data
The first line of input data contains a positive integer Z (1 ≤ Z ≤ 100) - the number of visits to the store.

Each of the next Z lines contains four natural numbers s, a, b, c (1 ≤ s, a, b, c ≤ 10^9) - the sum to spend, the number of items required to get the promotion, the number of items received for free, and the price of one piece of clothing.

Numbers in the lines are separated by single spaces.

## Program Output
For each visit to the boutique, the program should print out the maximum number of clothing items Halinka will be able to buy/get.

## Example
For the input data:
```
2
10 3 1 1
1000000000 1 1000000000 1
```

The correct output is:
```
13
1000000001000000000
```

During the first shopping trip, Halinka buys 3 × 3 = 9 pieces of clothing, for which she gets 3 × 1 = 3 free pieces and buys one more piece with the remaining money.

In the second case, Halinka buys 1000000000 × 1 pieces of clothing, for which she gets 1000000000 × 1000000000 = 1000000000000000000 free pieces.

Difficulty: 3/5 (Medium) - The problem requires understanding a promotion mechanism and optimizing the number of items that can be purchased with a given budget.