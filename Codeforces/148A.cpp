#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int k, l, m, n, d, damaged = 0;
    std::cin >> k >> l >> m >> n >> d;

    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            damaged++;
        }
    }

    std::cout << damaged;
    return 0;
}
