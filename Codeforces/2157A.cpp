#include <iostream>

using namespace std;
typedef unsigned short u16;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 t;
    cin >> t;
    while (t--) {
        u16 n, ans = 0, counts[105] = {0};
        cin >> n;
        for(int k = 0; k < n; k++) {
            u16 x;
            cin >> x;
            counts[x]++;
        }

        for (int i = 0; i <= n; i++) {
            if (counts[i] > i) {
                ans += counts[i] - i;
            } else if (counts[i] < i) {
                ans += counts[i];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}