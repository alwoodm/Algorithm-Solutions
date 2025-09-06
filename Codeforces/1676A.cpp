#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int t;
    std::cin >> t;
    std::string s;
    while (t--) {
        std::cin >> s;

        std::cout << (((s[0]-'0') + (s[1]-'0') + (s[2]-'0')) == ((s[3]-'0') + (s[4]-'0') + (s[5]-'0')) ? "YES\n" : "NO\n");
    }
    return 0;
}
