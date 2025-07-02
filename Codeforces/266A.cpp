#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int count = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}
