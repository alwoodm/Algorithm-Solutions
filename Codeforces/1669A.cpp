#include <iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t, r;
    std::cin >> t;

    while (t--) {
        std::cin >> r;

        if (r >= 1900) std::cout << "Division 1\n";
        else if (r >= 1600) std::cout << "Division 2\n";
        else if (r >= 1400) std::cout << "Division 3\n";
        else std::cout << "Division 4\n";
    }
}
