#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, a, b, x=0;
    std::cin >> n >> a >> b;

    for (int k = 1; k < n; k++) {
        x = std::max(x, std::min(a/k, b/(n-k)));
    }

    std::cout << x;
    return 0;
}
