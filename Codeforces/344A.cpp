#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, groups = 1;
    std::cin >> n;

    int m[n];
    for (int &x : m) {
        std::cin >> x;
    }

    for (int i = 1; i < n; i++) {
        if (m[i] != m[i-1]) {
            groups++;
        }
    }

    std::cout << groups << std::endl;
    return 0;
}
