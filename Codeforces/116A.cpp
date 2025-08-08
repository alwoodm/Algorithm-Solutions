#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n,p=0,m=0,a,b;
    std::cin >> n;

    while (n--) {
        std::cin >> a >> b;
        p += (b - a);
        (m < p) ? m = p : m = m;
    }

    std::cout << m;
    return 0;
}