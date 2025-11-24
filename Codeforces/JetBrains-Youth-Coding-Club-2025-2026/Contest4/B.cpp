#include <iostream>
#include <cmath>

using namespace std;
typedef unsigned int u32;
typedef unsigned long long u64;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u32 t;
    cin >> t;
    while (t--) {
        u64 k;
        cin >> k;

        u64 l = 1, r = 2000000000000000000LL;
        u64 ans = 0;

        while (l <= r) {
            u64 mid = l + (r - l) / 2;
            u64 squares = static_cast<u64>(sqrtl(mid));
            u64 on_bulbs = mid - squares;

            if (on_bulbs >= k) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}