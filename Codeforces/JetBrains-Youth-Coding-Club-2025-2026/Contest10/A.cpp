#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned short u16;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    u16 n,m;
    cin >> n >> m;
    u16 a[n], b[m];
    for (u16 & i: a) {
        cin >> i;
    }
    for (u16 & i: b) {
        cin >> i;
    }

    sort(a, a + n);
    sort(b, b + m);

    for (const u16 x : a) {
        for (const u16 y : b) {
            if (x == y) {
                cout << x;
                return 0;
            }
        }
    }

    cout << (a[0] < b[0] ? to_string(a[0]) + to_string(b[0]) : to_string(b[0]) + to_string(a[0]));
    return 0;
}