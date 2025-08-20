#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n, sum = 0, i;
    std::cin >> n;
    int count[4] = {0};
    while (n--) {
        std::cin >> i;
        count[i - 1]++;
    }

    sum += count[3];

    sum += count[2];
    (count[0] > count[2] ? count[0] -= count[2] : count[0] = 0);

    sum += count[1] / 2;
    count[1] %= 2;
    if (count[1] == 1) {
        if (count[0] > 0) {
            sum += 1;
            count[0] = (count[0] >= 2) ? count[0] - 2 : 0;
        } else {
            sum += 1;
        }
    }

    sum += (count[0] + 3) / 4;

    std::cout << sum << std::endl;
    return 0;
}
