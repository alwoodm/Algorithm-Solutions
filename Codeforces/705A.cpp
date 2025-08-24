#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cout << (i&1 ? "I hate" : "I love");
        std::cout << (i==n ? " it " : " that ");
    }

    return 0;
}
