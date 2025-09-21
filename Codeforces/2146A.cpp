#include <iostream>
#include <vector>
#include <algorithm>

int longestSubsequence(int arr[], int n) {
    std::vector<int> count(101, 0);
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int maxCount = 0;
    for (int i = 1; i <= 100; i++) {
        if (count[i] > 0) {
            maxCount = std::max(maxCount, count[i]);
        }
    }

    int maxLength = 0;

    for (int k = 1; k <= maxCount; k++) {
        int elementsWithKOrMore = 0;

        for (int i = 1; i <= 100; i++) {
            if (count[i] >= k) {
                elementsWithKOrMore++;
            }
        }

        maxLength = std::max(maxLength, elementsWithKOrMore * k);
    }

    return maxLength;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int a[n];
        for (int &x : a) {
            std::cin >> x;
        }

        int result = longestSubsequence(a, n);

        std::cout << result << '\n';
    }

    return 0;
}
