#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int m, x, y;
    std::cin >> m;
    int c[m];
    for (int& i : c) {
        std::cin >> i;
    }
    std::cin >> x >> y;

    for (int k = 1; k <= m; k++) {
        int jun=0, sen=0;

        for (int j = 0; j < m; j++) {
            (j+1 < k ? jun+=c[j] : sen+=c[j]);
        }

        if ((x <= jun && jun <= y) && (x <= sen && sen <= y)) {
            std::cout << k;
            return 0;
        }
    }

    std::cout << 0;
    return 0;
}
