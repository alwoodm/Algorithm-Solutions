#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    int prev, curr;
    std::cin >> prev;

    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < n; i++) {
        std::cin >> curr;

        if (curr >= prev) {
            currentLength++;
        } else {
            maxLength = std::max(maxLength, currentLength);
            currentLength = 1;
        }

        prev = curr;
    }

    maxLength = std::max(maxLength, currentLength);
    std::cout << maxLength;
    return 0;
}
