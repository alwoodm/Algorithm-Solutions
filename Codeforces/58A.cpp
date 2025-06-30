#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s;
    std::cin >> s;
    int n = 0;

    for (int i = 0; i < s.size() && n < 5; i++) {
        switch (n) {
            case 0:
                if (s[i] == 'h') n++;
                break;
            case 1:
                if (s[i] == 'e') n++;
                break;
            case 2:
                if (s[i] == 'l') n++;
                break;
            case 3:
                if (s[i] == 'l') n++;
                break;
            case 4:
                if (s[i] == 'o') n++;
                break;

        }
    }

    std::cout << (n == 5 ? "YES" : "NO");
    return 0;
}