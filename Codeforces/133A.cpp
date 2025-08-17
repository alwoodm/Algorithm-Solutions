#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string p;
    std::cin >> p;

    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            std::cout << "YES";
            return 0;
        }
    }

    std::cout << "NO";
    return 0;
}
