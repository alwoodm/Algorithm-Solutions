#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin >> n;

    int temp;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        sum += temp;
    }

    std::cout.precision(12);
    std::cout << std::fixed << sum / n << std::endl;
    return 0;
}
