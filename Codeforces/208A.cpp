#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string w, result = "";
    std::cin >> w;

    while (w.find("WUB") != std::string::npos) {
        int pos = w.find("WUB");
        w.replace(pos, 3, " ");
    }

    bool prev_space = true;
    for (char c : w) {
        if (c == ' ') {
            if (!prev_space && !result.empty()) {
                result += c;
                prev_space = true;
            }
        } else {
            result += c;
            prev_space = false;
        }
    }

    std::cout << result;
    return 0;
}
