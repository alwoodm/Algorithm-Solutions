#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 0; j < m; j++) {
                std::cout << '#';
            }
        } else {
            if (i % 4 == 2) {
                for (int j = 0; j < m - 1; j++) {
                    std::cout << '.';
                }
                std::cout << '#';
            } else {
                std::cout << '#';
                for (int j = 0; j < m - 1; j++) {
                    std::cout << '.';
                }
            }
        }
        std::cout << '\n';
    }
    return 0;
}
