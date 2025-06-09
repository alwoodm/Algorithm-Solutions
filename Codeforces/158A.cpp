#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, k, x=0;
    std::cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; i++) {
        std::cin >> scores[i];
    }

    int min_score = scores[k-1];

    for (int i = 0; i < n; i++) {
        if (scores[i] >= min_score && scores[i]>0) x++;
    }

    std::cout << x;
    return 0;
}
