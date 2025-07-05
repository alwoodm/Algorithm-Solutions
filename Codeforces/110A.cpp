#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string n;
    std::cin >> n;

    int lucky_count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') lucky_count++;

    }

    std::cout << (lucky_count == 4 || lucky_count == 7 ? "YES" : "NO");
    return 0;
}