#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;

        int c2 = 0, c3 = 0;
        while (n % 2 == 0) {
            n /= 2;
            c2++;
        }
        while (n % 3 == 0) {
            n /= 3;
            c3++;
        }

        if (n != 1) std::cout << -1 << "\n";
        else if (c2 > c3) std::cout << -1 << "\n";
        else std::cout << (c3 - c2) + c3 << "\n";
    }
    return 0;
}