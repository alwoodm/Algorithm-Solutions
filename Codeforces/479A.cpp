#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a,b,c;
    std::cin >> a >> b >> c;

    std::cout << std::max({a + b + c, a + b * c, a * b + c, a * b * c, (a + b) * c, a * (b + c)});;
    return 0;
}