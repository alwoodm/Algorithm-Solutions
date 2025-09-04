#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        std::string n;
        std::cin >> n;
        int count = 0;

        for (char& i : n) {
            if (i != '0') count++;
        }

        std::cout << count << '\n';
        unsigned long len = n.length();
        for (int i = 0; i < len; i++) {
            if (n[i] != '0') {
                std::cout << (n[i] - '0') * std::pow(10, len - i - 1) << ' ';
            }
        }
        std::cout << '\n';
    }
    return 0;
}
