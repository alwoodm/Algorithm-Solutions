#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;

    cout << n << ' ';
    while (n != 1) {
        n = (n & 1) ? 3 * n + 1 : n >> 1;
        cout << n << ' ';
    }

    cout << '\n';
    return 0;
}