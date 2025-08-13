#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, tmp;
    std::cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        p[tmp-1] = i+1;
    }

    for (int& i : p) {
        std::cout << i << ' ';
    }
}