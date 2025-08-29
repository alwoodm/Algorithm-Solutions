#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    while (k--) {
        for (int i = 0; i < n; i++) {
            if (s[i]=='B' && s[i+1]=='G') {
                std::swap(s[i], s[i+1]);
                i++;
            }
        }
    }

    std::cout << s;
    return 0;
}
