#include <iostream>
#include <set>
#include <string>

bool isDistinct(int y) {
    std::string s = std::to_string(y);
    std::set<char> unique_digits(s.begin(), s.end());

    return unique_digits.size() == s.size();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int y;
    std::cin >> y;

    y++;
    while (!isDistinct(y)) {
        y++;
    }

    std::cout << y;
    return 0;
}
