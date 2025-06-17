#include <iostream>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int y, w;
    std::cin >> y >> w;

    std::cout << (y > w ? (6 - y + 1) / gcd(6 - y + 1, 6) : (6 - w + 1) / gcd(6 - w + 1, 6))
              << "/"
              << (y > w ? 6 / gcd(6 - y + 1, 6) : 6 / gcd(6 - w + 1, 6));
    return 0;
}
