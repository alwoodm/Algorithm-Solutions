#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t, k, x;
    std::cin >> t;
    while (t--) {
        std::cin >> k >> x;
        int current = x;

        for (int i = 0; i < k; i++) {
            if (current > 1 && (current - 1) % 3 == 0) {
                int candidate = (current - 1) / 3;
                if (candidate > 0 && candidate % 2 == 1) {
                    current = candidate;
                    continue;
                }
            }
            current = 2 * current;
        }

        std::cout << current << "\n";
    }

    return 0;
}
