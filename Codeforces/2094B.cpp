#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;

    int n,m,l,r;
    for(int i = 0; i < t; i++) {
        std::cin >> n >> m >> l >> r;

        for (int j = 0; j < n-m; j++) {
            (l < 0) ? l++ : r--;
        }

        std::cout << l << ' ' << r << '\n';
    }
    return 0;
}
