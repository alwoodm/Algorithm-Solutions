#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    long long n, m, a;
    std::cin >> n >> m >> a;

    std::cout << ((n + a - 1) / a) * ((m + a - 1) / a);
    return 0;
}
