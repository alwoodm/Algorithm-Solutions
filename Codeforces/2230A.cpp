#include <iostream>
#include <string>

using namespace std;
typedef unsigned int uint;
typedef unsigned long long ull;

ull solve(ull n, ull a, ull b) {
    if (b >= 3 * a) return a * n;
    if ((n % 3) * a > b) return b * (n / 3 + 1);
    return b * (n / 3) + a * (n % 3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    uint t;
    cin >> t;
    while (t--) {
        ull n,a,b;
        cin >> n >> a >> b;

        cout << solve(n,a,b) << '\n';
    }
    return 0;
}