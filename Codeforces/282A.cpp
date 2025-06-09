#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n, x=0;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;

        x += (s[0] == '+' || s[1] == '+') ? 1 : -1;
    }

    std::cout << x;
    return 0;
}
