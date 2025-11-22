#include <iostream>

using namespace std;
typedef unsigned int u32;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u32 n;
    cin >> n;

    if (n % 4 == 2 || n % 4 == 3) {
        cout << -1;
        return 0;
    }

    u32 p[n];

    for (u32 i = 0; i < n / 2; i += 2) {
        p[i] = i + 2;
        p[i+1] = n - i;
        p[n - 1 - i] = n - 1 - i;
        p[n - 2 - i] = i + 1;
    }

    if (n % 2 == 1) {
        p[n / 2] = n / 2 + 1;
    }

    for (const u32 & i: p) {
        cout << i << ' ';
    }
    return 0;
}