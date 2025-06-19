#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin >> n;

    int sum_x = 0, sum_y = 0, sum_z = 0;

    for(int i = 0; i < n; i++) {
        int x, y, z;
        std::cin >> x >> y >> z;
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    std::cout << ( (sum_x == 0 && sum_y == 0 && sum_z == 0) ? "YES" : "NO");
    return 0;
}
