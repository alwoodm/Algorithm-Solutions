#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, coin_sum = 0, taken_sum = 0, count = 0;
    std::cin >> n;
    int coins[n];
    for (int &coin : coins) {
        std::cin >> coin;
        coin_sum += coin;
    }

    std::sort(coins, coins + n);
    for (int i = n - 1; i >= 0; i--) {
        taken_sum += coins[i];
        count++;
        if (taken_sum > coin_sum - taken_sum) {
            break;
        }
    }

    std::cout << count;
    return 0;
}
