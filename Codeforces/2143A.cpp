#include <iostream>
#include <vector>
#include <algorithm>

bool canMakeAllZero(std::vector<int>& p, int n) {
    for (int k = 1; k <= n; k++) {
        int maxVal = *max_element(p.begin(), p.end());
        if (maxVal == 0) break;

        int maxPos = max_element(p.begin(), p.end()) - p.begin();

        int bestStart = -1;
        int maxSum = -1;

        for (int start = std::max(0, maxPos - k + 1); start <= std::min(n - k, maxPos); start++) {
            int sum = 0;
            for (int i = start; i < start + k; i++) {
                sum += p[i];
            }
            if (sum > maxSum) {
                maxSum = sum;
                bestStart = start;
            }
        }

        if (bestStart == -1) return false;

        for (int i = bestStart; i < bestStart + k; i++) {
            p[i]--;
        }
    }

    for (int x : p) {
        if (x != 0) return false;
    }
    return true;
}


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> p(n);
        for (int i = 0; i < n; i++) {
            std::cin >> p[i];
        }

        std::cout << (canMakeAllZero(p, n) ? "YES\n" : "NO\n");
    }
    return 0;
}
