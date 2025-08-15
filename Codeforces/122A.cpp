#include <iostream>
#include <vector>

bool isLucky(int num) {
    std::string s = std::to_string(num);

    for (char c : s) {
        if (c != '4' && c != '7') {
            return false;
        }
    }

    return true;
}

bool isAlmostLucky(int num) {
    std::vector<int> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    for (int luckyNumber : luckyNumbers) {
        if (num % luckyNumber == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::cout << (isLucky(n) || isAlmostLucky(n) ? "YES" : "NO");
    return 0;
}
