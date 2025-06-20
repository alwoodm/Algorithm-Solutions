#include <iostream>
#include <algorithm>

int main() {
    long long x[4], sum = 0;
    for (int i = 0; i < 4; i++) {
        std::cin >> x[i];
        sum += x[i];
    }
    std::sort(x, x + 4);
    long long abc = sum / 3;
    std::cout << abc - x[0] << " " << abc - x[1] << " " << abc - x[2] << "\n";
    return 0;
}
