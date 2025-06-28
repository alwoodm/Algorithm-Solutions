#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string s, vowels = "aeiouy";
    std::cin >> s;

    for (char i : s) {
        char c = std::tolower(i);

        if (vowels.find(c) == std::string_view::npos) std::cout << '.' << c;
    }

    return 0;
}
