#include <iostream>

using namespace std;
typedef unsigned long long u64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u64 n, a, b;
    cin >> n >> a >> b;

    for (u64 x = 0; x * a <= n; x++) {
        u64 remainder = n - (x * a);

        if (remainder % b == 0) {
            u64 y = remainder / b;
            cout << "YES\n" << x << " " << y << "\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}