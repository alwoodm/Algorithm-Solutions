#include <iostream>

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long n;
    std::cin >> n;

    std::cout << (!(n&1) ? n/2 : -(n + 1) / 2);
    return 0;
}