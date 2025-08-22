#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, min = 0;
    std::cin >> n;

    min += n / 100;
    n %= 100;

    min += n / 20;
    n %= 20;

    min += n / 10;
    n %= 10;

    min += n / 5;
    n %= 5;

    min += n;

    std::cout << min;
    return 0;
}