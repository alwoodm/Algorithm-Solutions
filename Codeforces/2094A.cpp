#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;

    std::cin.ignore();
    for(int i = 0; i < t; i++) {
        std::string w;
        std::getline(std::cin, w);

        int pos = w.find(' ');

        std::cout << w[0];
        while (pos != std::string::npos) {
            pos++;
            if (pos < w.size()) std::cout << w[pos];
            pos = w.find(' ', pos);
        }
        std::cout << '\n';
    }
    return 0;
}
