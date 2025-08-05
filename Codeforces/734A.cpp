#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, w_a=0, w_d=0;
    std::cin >> n;

    char w;
    while (n--) {
        std::cin >> w;
        (w == 'A') ? w_a++ : w_d++;
    }

    std::cout << (w_a > w_d ? "Anton" : (w_a < w_d ? "Danik" : "Friendship")) << '\n';
}