#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string w;
    std::cin >> w;
    bool shouldChange = false, allUpper = true, firstLowerRestUpper = false;

    for (char c : w) {
        if (c < 'A' || c > 'Z') {
            allUpper = false;
            break;
        }
    }

    if (w.length() > 0 && w[0] >= 'a' && w[0] <= 'z') {
        firstLowerRestUpper = true;
        for (int i = 1; i < w.length(); i++) {
            if (w[i] < 'A' || w[i] > 'Z') {
                firstLowerRestUpper = false;
                break;
            }
        }
    }

    if (allUpper || firstLowerRestUpper) {
        for (int i = 0; i < w.length(); i++) {
            if (w[i] >= 'A' && w[i] <= 'Z') {
                w[i] = w[i] - 'A' + 'a';
            } else if (w[i] >= 'a' && w[i] <= 'z') {
                w[i] = w[i] - 'a' + 'A';
            }
        }
    }

    std::cout << w;
    return 0;
}
