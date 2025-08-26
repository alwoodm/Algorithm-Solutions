#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, count=0;
    std::cin >> n;
    int arr[n][2];
    for (auto &game : arr) {
        std::cin >> game[0] >> game[1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][0] == arr[j][1]) {
                count++;
            }
        }
    }

    std::cout << count;
    return 0;
}
