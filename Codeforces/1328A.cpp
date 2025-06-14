#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin >> t;

    int a, b;
    for(int i = 0; i < t; i++) {
        std::cin >> a >> b;

        std::cout << (a%b==0 ? 0 : (((a/b)+1)*b)-a) << '\n';
    }

    return 0;
}