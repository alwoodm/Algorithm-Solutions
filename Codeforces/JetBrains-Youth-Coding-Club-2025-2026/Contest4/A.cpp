#include <iostream>

using namespace std;
typedef long long i64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    i64 t;
    cin >> t;
    while (t--) {
        i64 n, a, b, c;
        cin >> n >> a >> b >> c;

        i64 ans = (n / (a + b + c)) * 3;
        i64 rem = n % (a + b + c);

        if (rem > 0) {
            ans++;
            rem -= a;
        }
        if (rem > 0) {
            ans++;
            rem -= b;
        }
        if (rem > 0) {
            ans++;
            rem -= c;
        }

        cout << ans << "\n";
    }

    return 0;
}