#include <iostream>
#include <algorithm>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;

        const int z = std::count(s.begin(), s.end(), '0');
        int ans = 0;

        for (int i = 0; i < z; i++) {
            if (s[i] == '1') ans++;
        }

        std::cout << ans << "\n";
    }
    return 0;
}