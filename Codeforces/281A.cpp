#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    std::string w;
    std::cin >> w;

    std::cout << std::string(1, std::toupper(w[0])) + w.substr(1);
    return 0;
}
