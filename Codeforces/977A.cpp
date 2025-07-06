#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, k;
    std::cin >> n >> k;

    for (int i = 0; i < k; i++) {
        (n % 10 != 0 ? n -= 1 : n /= 10);
    }

    std::cout << n;
    return 0;
}
