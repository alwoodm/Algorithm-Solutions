#include <iostream>

bool canArrange(int r, int k) {
    if (r == 0 && k == 0) return true;

    return r <= 2 * (k + 1) && k <= 2 * (r + 1);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t, a, b, c, d;
    std::cin >> t;

    while (t--) {
        std::cin >> a >> b >> c >> d;

        std::cout << (canArrange(a, b) && canArrange(c - a, d - b) ? "YES\n" : "NO\n");
    }

    return 0;
}
