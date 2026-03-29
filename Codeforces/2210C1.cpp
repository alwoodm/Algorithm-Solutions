#include <iostream>
#include <numeric>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        ll count = 0;
        for (int i = 0; i < n; i++) {
            ll g_l = (i == 0) ? 1 : gcd(a[i - 1], (a[i]));
            ll g_r = (i == n - 1) ? 1 : gcd(a[i], a[i + 1]);

            ll required = lcm(g_l, g_r);
            if (required < a[i]) count++;
        }
        cout << count << "\n";
    }
}
