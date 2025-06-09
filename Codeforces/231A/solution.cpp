#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin >> n;

    int sum=0, a, b, c;
    for(int i = 0; i < n; i++) {
        std::cin >> a >> b >> c;

        if (a+b+c>1) sum++;
    }

    std::cout << sum;
    return 0;
}
