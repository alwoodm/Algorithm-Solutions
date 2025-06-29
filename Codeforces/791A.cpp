#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int a, b, years = 0;
    std::cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    std::cout << years;
    return 0;
}
