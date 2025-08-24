// Dwie latarnie
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    short n;
    cin >> n;

    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    long long A[n + 1] = {}, B[n + 1] = {};
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        A[i] = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);
        B[i] = (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y);
    }

    long long ans = LLONG_MAX;
    for (int i = 0; i <= n; i++) {
        long long r1 = A[i], r2 = 0;
        for (int j = 0; j < n; j++) {
            if (A[j] > r1) {
                r2 = max(r2, B[j]);
            }
        }
        ans = min(ans, r1 + r2);
    }

    cout << ans << endl;
    return 0;
}