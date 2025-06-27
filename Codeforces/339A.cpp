#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin >> s;

    std::vector<int> t;

    t.push_back(s[0] - '0');

    for (int i = 2; i < s.size(); i += 2) {
        t.push_back(s[i] - '0');
    }

    std::sort(t.begin(), t.end());

    for (int i = 0; i < t.size(); i++) {
        std::cout << t[i];
        if (i < t.size() - 1) {
            std::cout << '+';
        }
    }
}
