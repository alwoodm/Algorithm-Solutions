#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n,p,q,sum=0;
    std::cin >> n;
    while (n--) {
        std::cin >> p >> q;

        if (q - p >= 2) sum += 1;
    }

    std::cout << sum;
    return 0;
}