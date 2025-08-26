#include <iostream>

bool isPossible(const long long n, const long long a, const long long b) {
    if ((n & 1) == 0) {
        if (a > b) {
            if ((b & 1) == 0 && (a & 1) == 0) return true;
            return false;
        }
        if ((b & 1) == 0) return true;
        return false;
    }
    if (a > b) {
        if ((b & 1) == 1 && (a & 1) == 1) return true;
        return false;
    }
    if ((b & 1) == 1) return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    long long t, n, a, b;
    std::cin >> t;
    while(t--) {
        std::cin >> n >> a >> b;
        std::cout << (isPossible(n, a, b) ? "YES\n" : "NO\n");
    }
    return 0;
}
