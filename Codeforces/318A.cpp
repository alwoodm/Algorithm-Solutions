#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    long long n, k;
    std::cin >> n >> k;

    std::cout << ( (k <= ((n + 1) / 2)) ? (2 * k - 1) : (2 * (k - ((n+1)/2))) ) ;
    return 0;
}