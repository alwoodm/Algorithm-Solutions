#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t, a, b, c;
    std::cin >> t;
    while(t--) {
        std::cin >> a >> b >> c;

        std::cout << ((a+b==c) || (a+c==b) || (b+c==a) ? "YES\n" : "NO\n");
    }
    return 0;
}
