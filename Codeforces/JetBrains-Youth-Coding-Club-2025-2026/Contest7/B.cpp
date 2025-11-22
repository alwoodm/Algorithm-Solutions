#include <iostream>

using namespace std;
typedef unsigned long long u64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u64 a, b;
    cin >> a >> b;

    if (b - a >= 10) {
        cout << 0;
        return 0;
    }

    u64 result = 1;
    for (u64 i = a + 1; i <= b; i++) {
        result = (result * (i % 10)) % 10;
    }

    cout << result;
    return 0;
}