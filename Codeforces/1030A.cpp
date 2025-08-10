#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, t;
    std::cin >> n;

    while (n--) {
        std::cin >> t;

        if (t == 1) {
            std::cout << "HARD";
            return 0;
        }
    }

    std::cout << "EASY";
}