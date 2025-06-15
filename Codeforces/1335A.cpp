#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    unsigned int t;
    std::cin >> t;

    unsigned int n;
    for(int i = 0; i < t; i++) {
        std::cin >> n;

        std::cout << ((n-1)/2) << '\n';
    }

    return 0;
}