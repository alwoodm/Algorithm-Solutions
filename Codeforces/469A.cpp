#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::set<int> s;
    int n, p, q, i;
    std::cin >> n;

    std::cin >> p;
    while (p--) {
        std::cin >> i;
        s.insert(i);
    }

    std::cin >> q;
    while (q--) {
        std::cin >> i;
        s.insert(i);
    }

    std::cout << (s.size()==n ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}
