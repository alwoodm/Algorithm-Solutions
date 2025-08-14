#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string x, y, wynik = "";
    std::cin >> x >> y;

    for (int i = 0; i < x.length(); i++) {
        wynik += (x[i] != y[i]) ? '1' : '0';
    }

    std::cout << wynik;
    return 0;
}
