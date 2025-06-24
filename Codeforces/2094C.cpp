#include <iostream>
#include <set>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;

    int n;
    for (int i = 0; i < t; i++) {
        std::cin >> n;

        int G[n][n];
        std::set<int> used;

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                std::cin >> G[j][k];
                used.insert(G[j][k]);
            }
        }

        int permutation[2*n];

        for (int j = 1; j <= 2 * n; j++) {
            if (used.find(j) == used.end()) {
                permutation[0] = j;
                break;
            }
        }

        for (int pos = 2; pos <= 2 * n; pos++) {
            for (int x = 0; x < n; x++) {
                int y = pos - x - 2;
                if (y >= 0 && y < n) {
                    permutation[pos - 1] = G[x][y];
                    break;
                }
            }
        }

        for (int j = 0; j < 2 * n; j++) {
            std::cout << permutation[j] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
