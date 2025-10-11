#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    unsigned long long n;
    std::cin >> n;
    unsigned long long x = n;

    x -= n/2 + n/3 + n/5 + n/7;
    x += n/6 + n/10 + n/14 + n/15 + n/21 + n/35;
    x -= n/30 + n/42 + n/70 + n/105;
    x += n/210;

    std::cout << x;
    return 0;
}
