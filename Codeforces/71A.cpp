#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin >> n;

    std::string w;
    for(int i = 0; i < n; i++) {
        std::cin >> w;

        if (w.size() > 10) {
            std::cout << w[0] << (w.size() - 2) << w.back() << '\n';
        } else {
            std::cout << w << '\n';
        }
    }
    return 0;
}
