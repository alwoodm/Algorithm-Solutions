#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::set<int> horseshoes;
    for (int i = 0; i < 4; i++) {
        int color;
        std::cin >> color;
        horseshoes.insert(color);
    }

    std::cout << 4-horseshoes.size();
    return 0;
}
