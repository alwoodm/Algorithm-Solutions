#include <bits/stdc++.h>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::string s;
    std::cin >> n >> s;

    bool present[26] = {false};

    for (char c : s) {
        char lower = tolower(c);
        present[lower - 'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            std::cout << "NO\n";
            return 0;
        }
    }

    std::cout << "YES\n";
    return 0;
}
