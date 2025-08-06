#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t, y;
    std::cin >> t;

    std::string x;
    while (t--) {
        std::cin >> x;

        y = x[0] - '0';
        for (char n : x) {
            if ((n - '0') < y) y = n - '0';
        }

        std::cout << y << '\n';
    }

    return 0;
}